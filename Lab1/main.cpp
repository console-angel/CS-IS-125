/*
* Name: Angel Gomez
* Assignment: LAB 1 - Sets
* Date: March 1, 2026
*/

#include "sets.cpp"

int main(void)
{
    Sets* setA = new Sets();
    Sets* setB = new Sets();

    setA->addElement(1);
    setA->addElement(2);
    setA->addElement(3);

    cout << "SetA: { ";
    for (int i = 0; i < setA->getSize(); i++)
    {
        cout << setA->getElement(i) << " ";
    }
    cout << "}" << endl;

    setB->addElement(3);
    setB->addElement(1);
    setB->addElement(3);
    setB->addElement(2);
    setB->addElement(4);

    cout << "SetB: { ";
    for (int i = 0; i < setB->getSize(); i++)
    {
        cout << setB->getElement(i) << " ";
    }
    cout << "}" << endl << endl;

    setA->isSubset(*setB);
    setA->isProperSubset(*setB);
    setA->printOrderedPairs(*setA, *setB);

    delete setA;
    delete setB;
    
    return 0;
}