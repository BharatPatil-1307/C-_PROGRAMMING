#include<iostream>
#include<stdlib.h>
using namespace std;

bool CheckVowel(char *str)
{
    bool bRet = false;
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' 
        && *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' )
        {
            cout << "Inside True\n";
            return true;
        }
        else
        {
            cout << "Inside False\n";
            return false;
        }
}

int main()
{
    char Arr[20];
    bool bRet = false;

    cout << "Enter the String to Check is Vowels Or Not :";
    cin.getline(Arr , 20);

    bRet = CheckVowel(Arr);

    if(bRet == true)
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }

    return 0;
}