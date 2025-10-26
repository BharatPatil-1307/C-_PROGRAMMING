#include<iostream>
using namespace std;

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}


int main()
{
    char Arr[30];

    cout << "Enter the String : ";
    cin.getline(Arr , 30);

    strtogglex(Arr);

    cout << "Converted String is : " << Arr <<"\n";

    return 0;
}