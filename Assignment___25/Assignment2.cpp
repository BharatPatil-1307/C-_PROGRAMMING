#include<iostream>
using namespace std;

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}


int main()
{
    char Arr[30];

    cout << "Enter the String : ";
    cin.getline(Arr , 30);

    struprx(Arr);

    cout << "Converted String is Upper Case : " << Arr <<"\n";

    return 0;
}