#include <iostream>
#include <iomanip> 
using namespace std;

void Display(char ch)
{
    cout << "Dec\tHex\tOct\n";
    cout << "----\t----\t----\n";

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        int ascii = (int)ch;

        cout << dec << ascii << "\t"
             << hex << uppercase << ascii << "\t"
             << oct << ascii << "\n";
    }
    else
    {
        cout << "Entered character is not an alphabet.\n";
    }
}

int main()
{
    char cValue;
    cout << "Enter the Character: ";
    cin >> cValue;

    Display(cValue);

    return 0;
}
