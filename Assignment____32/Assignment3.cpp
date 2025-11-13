#include<stdio.h>
#include<iostream>
#include<stdbool.h>

using namespace std;

typedef unsigned int UINT;
UINT OnBit(UINT iNo,UINT iPos )
{   
    UINT iMask = 1;
    iMask = 1 << (iPos - 1);
    
    int iResult = iMask | iNo;
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

    iRet = OnBit(iValue, iLocation);
    cout << "Modified Number : " << iRet;
   
    return 0 ;
}