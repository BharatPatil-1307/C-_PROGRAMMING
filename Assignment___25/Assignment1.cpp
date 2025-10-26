#include<iostream>
using namespace std;

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    strlwrx(Arr);

    cout << "Converted String is Lower Case : " <<  Arr <<"\n";

    return 0;
}