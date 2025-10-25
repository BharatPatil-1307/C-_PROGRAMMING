#include<iostream>
using namespace std;

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        cout << ch <<"\n";
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        cout << ch <<"\n";
    }
}

int main()
{
    char cValue = '\0';

    cout << "Enter the Charecter :";
    cin >> cValue;

    Display(cValue);

    return 9;
}