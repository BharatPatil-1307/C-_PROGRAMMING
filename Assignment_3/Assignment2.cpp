#include<iostream>
using namespace std;

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    cout<<"OutPut :";
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            cout<<"\t"<<iCnt;
        }
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number :";
    cin>>iValue;

    DisplayFactor(iValue);

    return 0;
}