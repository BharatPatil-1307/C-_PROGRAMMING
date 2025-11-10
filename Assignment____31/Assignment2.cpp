#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask1 = 1, iMask2 = 1;
    iMask1 = 1 << 6;
    iMask2 = 1 << 9;

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    UINT iResult = iNo & iMask1;
    iResult = iResult & iMask2;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    cout << "Enter number to check bit is On or OFF : :";
    cin >> iValue;

    iRet = OffBit(iValue);

    cout << "Modiffied number :" << iRet << endl;

    return 0;
}