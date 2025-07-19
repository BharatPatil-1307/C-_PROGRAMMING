#include<iostream>
using namespace std;

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }

    }
    cout << "Sum of factors: " << iSum1 << ", Sum of non-factors: " << iSum2 << endl;
    return iSum1 - iSum2;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number to Print Difference between Factor and Non factor :";
    cin>>iValue;

    iRet = FactDiff(iValue);
    cout<<"Difference of Factor and Non factor is  : "<<iRet<<"\n";

    return 0;
}