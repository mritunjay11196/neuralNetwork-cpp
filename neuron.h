//
//  neuron.h
//  neuralNetwork
//
//  Created by Mritunjay Singh on 06/04/20.
//  Copyright © 2020 Mritunjay Singh. All rights reserved.
//

#ifndef neuron_h
#define neuron_h

#include <iostream>
#include <cmath>

class Neuron
{
private:
    double val;
    double activatedVal;
    double derivedVal;              // derivative of the activated value
public:
    Neuron(double val)
    {
        this->val = val;
        activate();
        derive();
    }
    
    void activate();                // using fast sigmoid function, f(x) = x / (1 + |x|)
    void derive();                  // f'(x) = f(x) * (1 - f(x))
    
    void getVal() { std::cout<<this->val<<std::endl; }
    void getActivatedVal() { std::cout<<this->activatedVal<<std::endl; }
    void getDerivedVal() { std::cout<<this->derivedVal<<std::endl; }
};

void Neuron::activate()
{
    this->activatedVal = this->val / (1 + abs(this->val));
}

void Neuron::derive()
{
    this->derivedVal = this->activatedVal * (1 - this->activatedVal);
}

#endif /* neuron_h */
