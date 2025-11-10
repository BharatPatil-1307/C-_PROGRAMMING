#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 1, iMask2;
    iMask1 = 1 << 6;
    iMask2 = 1 << 9;
    
    UINT iResult = iNo ^ iMask1;
    iResult = iResult ^ iMask2;
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