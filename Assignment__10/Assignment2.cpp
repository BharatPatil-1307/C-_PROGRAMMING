#include<iostream>
using namespace std;

int CountOdd(int iNo)  // Input : 2395
{
    int iCnt = 0, iDigit = 1;

    if (iNo < 0)   // Handle negative numbers
    {
        iNo = -iNo;
    }

    if (iNo == 0)  // Special case: if input is 0
    {
        return 0;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 1)
        {
            iCnt = iCnt + 1;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter The Number : ";
    cin >> iValue;

    iRet = CountOdd(iValue);

    cout <<"Odd Number Is :" << iRet <<"\n";

    return 0;
}