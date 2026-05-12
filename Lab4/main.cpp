/**
* Name: Angel Gomez
* Assignment: Lab 4
*/

#include "FiboCatalan.h"

int main(void)
{
    int choice = 0;

    do {
        cout << "1. Do Catalan Numbers: " << endl;
        cout << "2. Do Fibonacci Numbers: " << endl;
        cout << "3. Q - Quit" << endl;

        cout << "Enter Selection: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                int n;
                cout << "Enter n for Catalan number: ";
                cin >> n;
                cout << "The " << n << "th Catalan number is: " << catalan(n) << endl << endl;
                break;
            case 2:
                int m;
                cout << "Enter n for Fibonacci number: ";
                cin >> m;
                cout << "The " << m << "th Fibonacci number is: " << fibonacci(m) << endl << endl;
                break;
            case 3:
                cout << "Quitting..." << endl << endl;
                break;
            default:
                cout << "Invalid selection. Please try again." << endl << endl;
        }
    } while (choice != 3);
}