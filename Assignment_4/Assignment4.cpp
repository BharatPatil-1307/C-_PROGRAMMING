#include<iostream>
using namespace std;

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter Number :";
    cin>>iValue;

    iRet = SumNonFact(iValue);

    cout<<"Summation Of Non Factors :"<<iRet<<"\n";

    return 0;
}