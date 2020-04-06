#include "neuron.h"

int main()
{
    // INPUT NEURONS
    Neuron* n1 = new Neuron(0.9);
    
    n1->getVal();
    n1->getActivatedVal();
    n1->getDerivedVal();
    
    return 0;
}
