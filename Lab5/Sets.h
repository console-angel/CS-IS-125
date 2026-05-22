// Name: Angel Gomez
// Assignment: Lab 5

/**
 * @file SetsInterface.h
*/

#ifndef SETS_H
#define SETS_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Sets
{
    private:
        map<int, bool> seenItem;
        vector<int> elements;

    public:
        Sets();
        Sets(vector<int> elem);
        ~Sets();

        void add(int element);
        bool contains(int element);

        bool isEmpty(); // Checks if the set is empty
        int getElement(int position); // Gets the element at the specified position
        int getSize(); // Gets the number of elements in the set

        bool isSubSet(Sets otherSet); // Does B Contain A
        bool isProperSubSet(Sets otherSet); // An Element in B that is not in A

        void unionOps(Sets otherSet); // Union of A and B
        void intersection(Sets otherSet); // Intersection of A and B
        void print();
};

#include "Sets.cpp"
#endif // SETS_H