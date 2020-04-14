#ifndef layer_h
#define layer_h

#include <vector>
#include "neuron.h"

class Layer
{
private:
    int size;
    std::vector<Neuron *> neuron;
public:
    Layer(int size);
    
    
};

Layer::Layer(int size)
{
    this->size = size;
    
    for(int i=0; i<size; i++)
    {
        Neuron *n = new Neuron(0.00);
        this->neuron.push_back(n);
    }
}

#endif /* layer_h */
