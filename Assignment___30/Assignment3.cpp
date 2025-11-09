#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask1 = 1 << 7;
    UINT iMask2 = 1 << 14;
    UINT iMask3 = 1 << 20;
    UINT iMask4 = 1 << 27;

    if (((iNo & iMask1) == iMask1) &&
        ((iNo & iMask2) == iMask2) &&
        ((iNo & iMask3) == iMask3) &&
        ((iNo & iMask4) == iMask4))
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
        cout << "7th, 15th, 21st and 28th bits are ON\n";
    }
    else
    {
        cout << "7th, 15th, 21st and 28th bits are OFF\n";
    }

    return 0;
}
