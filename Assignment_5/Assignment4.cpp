#include<iostream>
using namespace std;

void OddDisplay(int iNo)
{
    int iCnt = 0;

    cout<<"OutPut :";
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            cout<<iCnt<<"\t";
        }
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter number to give Odd number up to Number :";
    cin>>iValue;

    OddDisplay(iValue);

    return 0;
}