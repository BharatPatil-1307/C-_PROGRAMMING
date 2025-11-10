#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 1 << 6;
    iMask = ~iMask;
    return iNo & iMask;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout << "Enter the number :";
    cin >> iValue;

    iRet = OffBit(iValue);

    cout << "Modiffied number :" << iRet << endl;

    return 0;
}