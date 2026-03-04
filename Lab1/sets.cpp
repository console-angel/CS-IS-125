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

            /**
             * Sequence of Steps
            */

            map<int, bool> dictB;

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

            for (int i = 0; i < getSize(); i++)
            {
                if (dictB[getElement(i)])
                {
                    continue;
                }
                return false;
            }

            return true;

        }

        bool isProperSubset(const SetsInterface& otherSet) const
        {
            /**
             * Sequence of Steps
            */

            if (isSubset(otherSet))
            {
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

                for (int i = 0; i < otherSet.getSize(); i++)
                {
                    if (dictA[otherSet.getElement(i)])
                    {
                        continue;
                    }
                    else
                    {
                        return true;
                    }
                }

                return false;
            }
            else
            {
                return false;
            }
        }

        void printOrderedPairs(const SetsInterface& mainSet, const SetsInterface& otherSet) const
        {
            /**
             * Sequence of Steps
            */
            cout << endl;
        }






};