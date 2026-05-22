// Name: Angel Gomez
// Assignment: Lab 5

#include "Sets.h"

Sets::Sets() {} // constructor

Sets::Sets(vector<int> elem) // constructor with vector of elements
{
    int pos = 0;
    while (pos < elem.size())
    {
        this->add(elem[pos]);
        pos++;
    }
}

Sets::~Sets() {} // destructor

void Sets::add(int element)
{
    if (!this->contains(element) || this->isEmpty())
    {
        seenItem[element] = true;
        elements.push_back(element);
    }
} // Adds an element to the set

bool Sets::contains(int element)
{
    return seenItem[element];
} // Checks if the set contains the specified element

bool Sets::isEmpty()
{
    return elements.empty();
} // Checks if the set is empty

int Sets::getElement(int position)
{
    return elements[position];
} // Gets the element at the specified position

int Sets::getSize()
{
    return elements.size();
} // Gets the number of elements in the set

bool Sets::isSubSet(Sets otherSet)
{
    for (int i = 0; i < elements.size(); i++)
    {
        if (!otherSet.contains(elements[i]))
        {
            return false;
        }
    }
    return true;
} // Checks if the set is a subset of another set

bool Sets::isProperSubSet(Sets otherSet)
{
    return isSubSet(otherSet) && elements.size() < otherSet.getSize();
} // Checks if the set is a proper subset of another set

void Sets::unionOps(Sets otherSet)
{
    int pos = 0;
    while (pos < otherSet.getSize())
    {
        int otherElem = otherSet.getElement(pos);
        
        if (!this->contains(otherElem))
        {
            this->add(otherElem);
        }
        pos++;
    }

} // Performs the union of two sets

void Sets::intersection(Sets otherSet)
{
    for (int i = 0; i < elements.size(); i++)
    {
        if (!otherSet.contains(elements[i]))
        {
            elements.erase(elements.begin() + i);
            i--;
        }
    }
} // Performs the intersection of two sets

void Sets::print()
{
    for (int i = 0; i < elements.size(); i++)
    {
        cout << elements[i] << " ";
    }
    cout << endl;
} // Prints the elements of the set