#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMast1 = 1 << 14;
    UINT iMast2 = 1 << 17;

    if((iNo & iMast1) && (iNo & iMast2))
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
        cout << "5th and 18 bit is ON\n";
    }
    else
    {
        cout << "5th and 18 bit is OFF\n";
    }


    return 0;
}