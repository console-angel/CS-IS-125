/**
 * Name: Angel Gomez
 * Assignment: Lab 2 - Binary
 * 
 * Description: This program takes an integer input from the user and converts it to its binary representation. 
 * If the input is negative, it converts it to its two's complement binary representation.
 * 
 * Date: March 11, 2026
 */
#include <iostream>
#include <string>

using namespace std;

string binary(int value)
{
    string bin = "";
    string reversedBin = "";

    // Convert To Binary
    while (value > 0)
    {
        if (value % 2 == 0)
        {
            bin = bin + "0";
        }
        else
        {
            bin = bin + "1";
        }
        value = value / 2; 
    }

    // Pad With Zeros To Make It 8 Bits
    if (bin.length() < 8)
    {
        for (int i = bin.length(); i < 8; i++)
        {
            bin = bin + "0";
        }
    }

    // Reverse The String To Get The Correct Binary Representation
    for (int i = bin.length() - 1; i >= 0; i--)
    {
        reversedBin = reversedBin + bin[i];
    }

    return reversedBin;
}

string negBin(int value)
{
    // Neg A = Not A + 1
    string bin = binary(value);

    string notA = "";

    bool carryOne = false;

    // Not A : Flip The Bits 0s --> 1s (Vice Versa)
    for (int i = 0; i < bin.length(); i++)
    {
        if (bin[i] == '0')
        {
            notA = notA + "1";
        }
        else
        {
            notA = notA + "0";
        }
    }

    // Neg A : Add One --> Not A
    int pos = notA.length() - 1;

    while (pos >= 0)
    {
        if (carryOne)
        {
            // Check If Next Bit Is 1, If So Set It To 0 And Carry One To The Next Bit
            if (notA[pos] == '1')
            {
                notA[pos] = '0';
            }
            else
            {
                notA[pos] = '1';
                break;
            }
        }
        else
        {
            // Check If Last Bit is 1, If So Set It To 0 And Carry One To The Next Bit
            if (notA[pos] == '1')
            {
                notA[pos] = '0';
                carryOne = true;
            }
            else
            {
                notA[pos] = '1';
                break;
            }
        }

        pos--; 
    }

    return notA;
}

int main(void)
{
    int userVal;

    cout << "Please Enter An Integer: ";
    cin >> userVal;

    if (userVal < 0)
    {
        cout << "Binary (" << userVal << "): " << negBin(abs(userVal)) << endl;
    }
    else
    {
        cout << "Binary (" << userVal << "): " << binary(userVal) << endl;
    }

    return 0;
}
