#include<iostream>
using namespace std;

int CheckFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        cout <<"INVALID INPUT : Negative value is not in Factorial , But i am considering it is positive value \n";
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
        cout << iCnt <<" * ";
    }
    cout << "\n";

    return iFact;
}


int main()
{
    int iValue = 0, iRet = 0;
    cout <<"Enter the number :";
    cin >> iValue;

    iRet = CheckFactorial(iValue);

    cout <<"Factorial is :" << iRet <<"\n";

    return 0;
}