/*
* Name: Angel Gomez
* Lab 6: MicroCasino
*/

#include "MicroCasino.h"

MicroCasino::MicroCasino()
{
    srand(time(0)); // Seed the random number generator
}

MicroCasino::~MicroCasino()
{
}

int MicroCasino::tossCoin(int flips)
{
    int heads = 0;
    for (int i = 0; i < flips; i++)
    {
        if (rand() % 2 == 0)
        {
            heads++;
        }
    }
    return heads;
}

int MicroCasino::rollDice(int numRolls)
{
    int snakeEyes = 0;
    for (int i = 0; i < numRolls; i++)
    {
        int die1 = rand() % 6 + 1;
        int die2 = rand() % 6 + 1;

        if (die1 == 1 && die2 == 1)
        {
            snakeEyes++;
        }
    }
    return snakeEyes;
}

int MicroCasino::permuteAces(int numCards)
{
    if (numCards < 1 || numCards > 7)
    {
        return -1; // Invalid input
    }
    return factorial(7) / factorial(7 - numCards);
}

int MicroCasino::factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}