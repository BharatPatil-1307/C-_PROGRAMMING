#include<iostream>
#include<stdlib.h>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, int iPos)
{
    UINT iMask1 = 1;
    if(iPos <= 0 || iPos > 32)
    {
        printf("Invaild Bit Position \n");
        return -1;
    }
    iMask1 = iMask1 << (iPos -1 );
    UINT iResult = iNo & iMask1;
    return iResult == iMask1;
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    bool bRet = false;

    cout << "Enter the Number :";
    cin >> iValue;

    cout << "Enter the Position :";
    cin   >> iLocation;

    bRet = CheckBit(iValue , iLocation);
    if(bRet == true)
    {
        cout << "bit is ON at location " << iLocation <<endl;
    }
    else
    {
        cout << "bit is OF at location " << iLocation <<endl;
    }

    return 0;
}