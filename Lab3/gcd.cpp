/**
 * Name: Angel Gomez
 * Lab 3: GCD
 * Date: April 2, 2026
 * 
*/
#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    if (b % a == 0) // check if remainder is zero
    {
        return a; // return divisor = gcd
    }

    int r = b % a; // remainder
    b = a; // dividend = divisor
    return GCD(r, b);
}

int main(void)
{
    // gcd(divisor, dividend) = gcd(a, b)

    int divisor, dividend = 0;

    cout << "Enter Integer Value For A: ";
    cin >> divisor;

    cout << "Enter Integer Value For B: ";
    cin >> dividend;

    if (divisor == 0 || dividend == 0)
    {
        cout << "Please Enter A Non-Zero Integer Values.";
        main();
    }
    else
    {
        cout << "The Greatest Common Divisor for GCD(" << divisor << ", " << dividend << ") = " << GCD(divisor, dividend);
    }
}