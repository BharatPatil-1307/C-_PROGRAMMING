#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x0000000F;
    int iResult = iMask | iNo;
    return iResult;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    cout << "Enter number to Toggel the  Bit 7th and 10th : :";
    cin >> iValue;

    iRet = ToggleBit(iValue);

    cout << "Modiffied number :" << iRet << endl;

    return 0;
} 