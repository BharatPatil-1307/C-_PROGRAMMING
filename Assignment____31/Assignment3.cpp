#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 1;
    iMask = 1 << 6;
    UINT iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    cout << "Enter number to check bit is Toggel : :";
    cin >> iValue;

    iRet = ToggleBit(iValue);

    cout << "Modiffied number :" << iRet << endl;

    return 0;
}