#include<iostream>
using namespace std;

void DisplayDigit(char *str)
{
    cout << "Display Only Digit : ";
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            cout << *str;
        }
        str++;
    }
}

int main()
{
    char Arr[50];
    cout << "Enter String : ";
    cin.getline(Arr , 50);

    DisplayDigit(Arr);

    return 0;
}