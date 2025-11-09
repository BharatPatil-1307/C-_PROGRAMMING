#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask1 = 1 << 6;
    UINT iMask2 = 1 << 7;
    UINT iMask3 = 1 << 8;

    if (((iNo & iMask1) == iMask1) &&
        ((iNo & iMask2) == iMask2) &&
        ((iNo & iMask3) == iMask3))
    {
        return TRUE;
    }

    return FALSE;
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    cout << "Enter number: ";
    cin >> iValue;

    bRet = CheckBit(iValue);

    if (bRet == TRUE)
    {
        cout << "7th, 8th, 9st bits are ON\n";
    }
    else
    {
        cout << "7th, 8th, 9st bits are OFF\n";
    }

    return 0;
}
