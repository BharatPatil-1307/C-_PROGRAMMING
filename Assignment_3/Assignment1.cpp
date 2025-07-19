#include<iostream>
using namespace std;

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    cout<<"OutPut :";
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt * 2<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number :";
    cin>>iValue;

    PrintEven(iValue);

    return 0;
}