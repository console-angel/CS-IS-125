/*
* Name: Angel Gomez
* Lab 6: MicroCasino
*/

#include "MicroCasino.h"
    
int main()
{
    MicroCasino casino;

    int choice;
    cout << "Welcome to the MicroCasino!" << endl;

    cout << "Please select a game:" << endl;
    cout << "1. Toss a Coin" << endl;
    cout << "2. Roll Dice" << endl;
    cout << "3. Permute Aces" << endl;
    cout << "4. Exit" << endl;
    
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1)
    {
        int flips;
        cout << "Enter the number of coin flips: ";
        cin >> flips;
        int heads = casino.tossCoin(flips);
        cout << "Number of heads: " << heads << endl;
    }
    else if (choice == 2)
    {
        int rolls;
        cout << "Enter the number of dice rolls: ";
        cin >> rolls;
        int snakeEyes = casino.rollDice(rolls);
        cout << "Number of snake-eyes: " << snakeEyes << endl;
    }
    else if (choice == 3)
    {
        int numCards;
        cout << "Enter the number of aces to select (1-7): ";
        cin >> numCards;

        int result = casino.permuteAces(numCards);

        if (result == -1)
        {
            cout << "Invalid number of cards. Please try again." << endl;
        }
        else
        {
            cout << "Number of permutations: " << result << endl;
        }
    }
    else if (choice == 4)
    {
        cout << "Thank you for playing! Goodbye!" << endl;
    }
    else
    {
        cout << "Invalid choice. Please try again." << endl;
    }
    return 0;
}