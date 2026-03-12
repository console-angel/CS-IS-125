#include <iostream>
#include <string>

using namespace std;

string negBin(string bin)
{
    // Neg A = Not A + 1

    char reserve = ' ';

    for (int i = 0; i < bin.length(); i++)
    {
        if (bin[i] == '0')
        {
            bin[i] = '1';
        }
        else
        {
            bin[i] = '0';
        }
    }
}

string binary(int value)
{
    string bin = "";
    string reverseBin = "";

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

    for (int i = bin.length() - 1; i >= 0; i--)
    {
        reverseBin = reverseBin + bin[i];
    }

    return reverseBin;
}


int main(void)
{
    int userVal;

    cout << "Please Enter Positive Integer: ";
    cin >> userVal;

    if (userVal < 0)
    {
        cout << "Binary (" << userVal << "): " << negBin(binary(userVal)) << endl;
    }
    else
    {
        cout << "Binary (" << userVal << "): " << binary(userVal) << endl;
    }

    return 0;
}
