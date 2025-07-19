#include<iostream>
using namespace std;

int MulFact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            cout<<iCnt;
            cout<<" * ";
            iMul = iMul * iCnt;
        }
    }
    cout<<"\n";
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter Number :";
    cin>>iValue;

    iRet = MulFact(iValue);

    cout<<"Factors Is :"<<iRet<<"\n";

    return 0;
}