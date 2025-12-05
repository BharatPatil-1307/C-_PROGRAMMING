#include<iostream>
using namespace std;

template <class T>
void Display(T value, int count)
{
    for(int i = 0; i < count; i++)
    {
        cout << value << "\t";
    }
    cout << "\n";
}

int main()
{
    // For Character
    char cValue;
    int iCount;

    cout << "Enter a character : ";
    cin >> cValue;
    cout << "Enter the Number :";
    cin >> iCount;
    Display(cValue, iCount);

    // For Integer
    int iValue;
    cout << "Enter the integer number : ";
    cin >> iValue;
    cout <<"Enter the Number :";
    cin >>iCount;
    Display(iValue, iCount);

    // For Float
    float fValue;
    cout << "Enter the float number : ";
    cin >> fValue;
    cout <<"Enter the Numner :";
    cin >>iCount;
    Display(fValue, iCount);

    return 0;
}