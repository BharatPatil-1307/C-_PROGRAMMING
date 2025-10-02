#include<iostream>
#include<stdlib.h>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int No)
{
    int iDigit = 0;

    if(No == 0)   
    {
        return TRUE;
    }

    while(No != 0)  
    {
        iDigit = No % 10;

        if(iDigit == 0)  
        {
            return TRUE;
        }
        No = No / 10;
    }

    return FALSE;   
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    cout <<"Enter the Number to check if Zero is Present or Not: ";
    cin >> iValue;

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        cout << "✅ Zero is Present.\n";
    }
    else
    {
        cout << "❌ Zero is Not Present.\n";
    }

    return 0;
}
