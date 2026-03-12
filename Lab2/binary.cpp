#include <iostream>
#include <string>

using namespace std;

string binary(int value)
{
    if (value < 0)
    {
        cout << "Positive Integers Only." << endl;
        return "";
    }
    else
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
}


int main(void)
{
    int userVal;

    cout << "Please Enter Positive Integer: ";
    cin >> userVal;

    if (userVal < 0)
    {
        cout << "Error! Only Enter Positive Integers." << endl;
        cin.ignore(1000, '\n');
        main();
    }
    else
    {
        cout << "Binary (" << userVal << "): " << binary(userVal) << endl;
    }

    return 0;
}
