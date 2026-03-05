/*
* Name: Angel Gomez
* Assignment: LAB 1 - Sets
* Date: March 1, 2026
*/

#include <iostream>
#include <map>
#include <vector>
#include "SetsInterface.h"

using namespace std;

class Sets : public SetsInterface
{
    private:
        vector<int> data;

    public:
        /*
            * Constructor Method
        */
        Sets()
        {
            data.resize(0);
        }

        /*
            * SetsInterface Methods - Implementation
        */
        void addElement(const int& elem) override
        {
            data.push_back(elem);
        }

        int getElement(const int& pos) const
        {
            if (pos >= 0 && pos < getSize())
            {
                return data[pos];
            }
            else
            {
                return -1;
            }
        }

        int getSize() const
        {
            return data.size();
        }

        bool isSubset(const SetsInterface& otherSet) const
        {
            // * Step 1: Create a map and store every instance of all elements in setB, skipping duplicates
            map<int, bool> dictB; // Example: {1, true}

            for (int i = 0; i < otherSet.getSize(); i++)
            {
                if(dictB.empty())
                {
                    dictB[otherSet.getElement(i)] = true;
                }
                else if (dictB[otherSet.getElement(i)])
                {
                    continue;
                }
                else
                {
                    dictB[otherSet.getElement(i)] = true;
                }
            }

            // * Step 2: Check If Every Element of A Is Contained In B
            for (int i = 0; i < getSize(); i++)
            {
                if (dictB[getElement(i)])
                {
                    continue;
                }
                cout << "False: A is not a subset of B" << endl << endl;
                return false;
            }

            cout << "True: A is a subset of B" << endl << endl;
            return true;
        }

        bool isProperSubset(const SetsInterface& otherSet) const
        {
            // * Step 1: Check if A is a subset of B, otherwise return false
            if (isSubset(otherSet))
            {
                // * Step 2: If Step 1 Passes --> repeat Step 1 from isSubset but for set A
                map<int, bool> dictA;

                for (int i = 0; i < getSize(); i++)
                {
                    if(dictA.empty())
                    {
                        dictA[getElement(i)] = true;
                    }
                    else if (dictA[getElement(i)])
                    {
                        continue;
                    }
                    else
                    {
                        dictA[getElement(i)] = true;
                    }
                }

                // * Step 3: Check if at least one element in B is not found in A
                for (int i = 0; i < otherSet.getSize(); i++)
                {
                    if (dictA[otherSet.getElement(i)])
                    {
                        continue;
                    }
                    else
                    {
                        cout << "True: A is a proper subset of B" << endl << endl;
                        return true;
                    }
                }
            }
            cout << "False: A is not a proper subset of B" << endl << endl;
            return false;
        }

        void printOrderedPairs(const SetsInterface& mainSet, const SetsInterface& otherSet) const
        {
           for (int i = 0; i < mainSet.getSize(); i++)
           {
                cout << "{ ";
                for (int j = 0; j < otherSet.getSize(); j++)
                {
                    cout << "(" << mainSet.getElement(i) << ", " << otherSet.getElement(j) << ") ";
                }
                cout << " }" << endl;
           }
           cout << endl;
        }
};