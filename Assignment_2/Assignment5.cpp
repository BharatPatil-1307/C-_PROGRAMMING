#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    cout<<"Enter The Number Check Even Or Odd :";
    cin>>iValue;

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        cout<<"Number is Even..\n";
    }
    else
    {
        cout<<"Number is Odd..\n";
    }


    return 0;
}