#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str , char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char Arr[50];
    char Check = '\0';
    BOOL bRet = FALSE;

    cout << "Enter the String :";
    cin.getline(Arr , 50);

    cout << "Enter the Charecter to check Present or Not :";
    cin >> Check;

    bRet = ChkChar(Arr , Check);

    if(bRet == TRUE)
    {
        cout << Check << " : "<< "It is Present\n";
    }
    else
    {
        cout << Check << " : "<< "It is Not Present\n";
    }

    return 0;
}