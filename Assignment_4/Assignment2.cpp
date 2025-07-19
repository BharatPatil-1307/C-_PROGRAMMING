#include<iostream>
using namespace std;

void FactorsRevers(int iNo)
{
    int iCnt = 0;

    cout<<"OutPut :";
    for(iCnt = iNo -1;iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            cout<<iCnt<<"\t";
        }
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number :";
    cin>>iValue;

    FactorsRevers(iValue);

    return 0;
}