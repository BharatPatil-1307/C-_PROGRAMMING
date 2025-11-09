#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMast = 1 << 14;
    UINT iResult = 0;

    iResult = iNo & iMast;

    if(iResult == iMast)
    {
        return TRUE;
    }
    
    return FALSE;
}
int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    cout << "Enter number :";
    cin >> iValue;

    bRet = CheckBit(iValue);

    if(bRet == TRUE)
    {
        cout << "15th Bit is ON\n";
    }
    else
    {
        cout << "15th Bit OFF\n";
    }


    return 0;
}