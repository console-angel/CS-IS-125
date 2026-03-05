/*
* Name: Angel Gomez
* Assignment: LAB 1 - Sets
* Date: March 1, 2026
*/

/**@file SetsInterface.h*/
#ifndef _SETS_INTERFACE_H_
#define _SETS_INTERFACE_H_

/*
          UML Diagram
   ------------------------
   + addElement(elem: int): void
   + getElement(pos: int): int
   + getSize(): int
   + isSubset(b: SetsInterface): bool
   + isProper(b: SetsInterface): bool
   + printOrderedPairs(a: SetsInterface, b: SetsInterface): void

*/
class SetsInterface
{
    public:
        virtual ~SetsInterface() {}

        /** Append An Element To The Set
         * @pre elem > 0
         * @param elem : (int)
         * @post append element to the set
        */
        virtual void addElement(const int& elem) = 0;

        /** Get The Element Based On Position In The Set
         * @pre check if pos is in range of set
         * @param pos : (int)
         * @return -1 (if invalid range)
        */
        virtual int getElement(const int& pos) const = 0;

        /** Get The Size of The Set
         * @return the integer based on size of the set
        */
        virtual int getSize() const = 0;

        /** Checks If Current Set Is Subset
         * @param otherSet otherwise known as setB
         * @return true if current set is a subset of otherSet, false otherwise
        */
        virtual bool isSubset(const SetsInterface& otherSet) const = 0;

        /**
         * Checks If otherSet contains at least one element not in main set
         * @pre checks if otherSet is a subset first
         * @param otherSet otherwise known as setB
         * @return true if current set is a proper subset, false otherwise
        */
        virtual bool isProperSubset(const SetsInterface& otherSet) const = 0;

        /** Print Out All Ordered Based On Given Sets : (A x B)
         * @param mainSet, otherSet --> setA, setB
         * @post all ordered pairs are printed after operation (A x B)
        */
        virtual void printOrderedPairs(const SetsInterface& mainSet, const SetsInterface& otherSet) const = 0;

}; 
#endif