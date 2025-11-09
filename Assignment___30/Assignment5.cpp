#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask1 = 1 << 0;   // 1th bit
    UINT iMask2 = 1 << 31;  // 32th bit

    if( (iNo & iMask1) && (iNo & iMask2))
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
        cout << "1th bit and 32th bit is ON\n";
    }
    else
    {
        cout << "1th bit and last bit is NOT ONF\n";
    }

    return 0;
}
