#include "FiboCatalan.h"

int main(void)
{
    cout << "1. Do Catalan Numbers: " << endl;
    cout << "2. Do Fibonacci Numbers: " << endl;
    cout << "3. Q - Quit" << endl;

    int choice;
    cout << "Enter Selection: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            int n;
            cout << "Enter n for Catalan number: ";
            cin >> n;
            cout << "The " << n << "th Catalan number is: " << catalan(n) << endl;
            break;
        case 2:
            int m;
            cout << "Enter n for Fibonacci number: ";
            cin >> m;
            cout << "The " << m << "th Fibonacci number is: " << fibonacci(m) << endl;
            break;
        case 3:
            cout << "Quitting..." << endl;
            break;
        default:
            cout << "Invalid selection. Please try again." << endl;
    }
}