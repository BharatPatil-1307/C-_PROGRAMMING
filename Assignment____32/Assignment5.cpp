#include<stdio.h>
#include<iostream>
#include<stdbool.h>

using namespace std;
typedef unsigned int UINT;
UINT ToggleBit(UINT iNo )
{   
    UINT iMask1 = 0xF000000F;
   
    UINT iResult = iNo ^ iMask1;
    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0;

    int iRet = 0;
    cout >> "Enter number to check bit is On or OFF :  ";
    cin  >> iValue;
   

    iRet = ToggleBit(iValue);
    cout << "Modified Number : " << iRet;
   
    return 0 ;
}