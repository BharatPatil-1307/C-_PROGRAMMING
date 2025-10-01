///////////////////////////////////////////////////////
//
//  File name :     Assignment3.cpp
//  Input :         5 
//  Output :        8 (4 * 2)
//  Author :        Bharat Sanjay Patil
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        cout << "INVALID INPUT ❌: Negative value is not allowed for Factorial, "
             << "but I am considering it as a positive value.\n";
        iNo = -iNo; // Convert negative to positive
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            cout << iCnt << " * ";
            iFact = iFact * iCnt;
        }
    }
    cout << endl;
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter Number: ";
    cin >> iValue;

    iRet = EvenFactorial(iValue);

    cout << "Even Factorial Of Number Is " << iRet << endl;

    return 0;
}
