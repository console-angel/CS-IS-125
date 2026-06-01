/*
* Name: Angel Gomez
* Lab 6: MicroCasino
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

#ifndef MICROCASINO_H
#define MICROCASINO_H

using namespace std;

class MicroCasino
{
    public:
        MicroCasino();
        ~MicroCasino();

        int tossCoin(int flips);
        int rollDice(int numRolls);
        int permuteAces(int numCards);
        int factorial(int n);

};
#include "MicroCasino.cpp"
#endif // MICROCASINO_H