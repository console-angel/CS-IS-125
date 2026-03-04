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
        Sets()
        {
            data.resize(0);
        }

        void addElement(const int& elem) override
        {
            data.push_back(elem);
        }

        int getElement(const int& pos) const
        {
            if (pos >=0 && pos < getSize())
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

            map<int, bool> dict;

            for (int i = 0; i < otherSet.getSize(); i++)
            {
                if(dict.empty())
                {
                    dict[otherSet.getElement(i)] = true;
                }
                else if (dict[otherSet.getElement(i)])
                {
                    continue;
                }
                else
                {
                    dict[otherSet.getElement(i)] = true;
                }
            }

            for (int i = 0; i < getSize(); i++)
            {
                if (dict[getElement(i)])
                {
                    continue;
                }
                return false;
            }

            return true;

        }

        bool isProperSubset(const SetsInterface& otherSet) const
        {
            if (isSubset(otherSet))
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        void printOrderedPairs(const SetsInterface& mainSet, const SetsInterface& otherSet) const
        {
            cout << endl;
        }






};