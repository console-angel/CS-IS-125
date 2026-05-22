// Name: Angel Gomez
// Assignment: Lab 5

#include "Sets.h"

int main(void)
{
    Sets setA;
    Sets setB;
    Sets setC;

    setA.add(1);
    setA.add(2);
    setA.add(3);
    setA.add(4);

    setB.add(3);
    setB.add(4);
    setB.add(5);
    setB.add(6);

    setC.add(1);
    setC.add(2);
    setC.add(3);
    setC.add(4);

    cout << "Set A: ";
    setA.print();

    cout << "Set B: ";
    setB.print();

    cout << "Set C: ";
    setC.print();

    cout << endl;

    setA.unionOps(setB);
    cout << "Set A: ";
    setA.print();

    setC.intersection(setB);
    cout << "Set C: ";
    setC.print();

    cout << endl;

    if (setA.isSubSet(setB))
    {
        cout << "Is Set A a subset of Set B: True" << endl;
    }
    else
    {
        cout << "Is Set A a subset of Set B: False" << endl;
    }

    if (setC.isSubSet(setB))
    {
        cout << "Is Set C a subset of Set B: True" << endl;
    }
    else
    {
        cout << "Is Set C a subset of Set B: False" << endl;
    }

    return 0;

}