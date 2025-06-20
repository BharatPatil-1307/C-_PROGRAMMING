#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool Check(int iNo)
{
    if((iNo % 5) == 0)
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

    cout<<"Enter Number :";
    cin>>iValue;

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        cout<<"Divisible by 5\n";
    }
    else
    {
        cout<<"Not Divisible By 5\n";
    }

    return 0;
}