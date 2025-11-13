#include<stdio.h>
#include<iostream>
#include<stdbool.h>
using namespace std;

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo,UINT iPos )
{   
    UINT iMask1 = 1;
    iMask1 = 1 << (iPos -1);
    UINT iResult = iNo ^ iMask1;
    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0;

    int iRet = 0;
    cout << "Enter number to check bit is On or OFF :  ";
    cin >> iValue;
    cout << "Enter Location : ";
    cin >> iLocation;

    iRet = ToggleBit(iValue,iLocation);
    cout << "Modified Number :",iRet;
   
    return 0 ;
}
