#include<iostream>
using namespace std;

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    cout<<"OutPut :";
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        cout<<iNo * iCnt<<"\t";
    }
    cout<<"\n";
}

int main()
{   
    int iValue = 0;

    cout<<"Enter Number that you want first 5 number of multiplication :";
    cin>>iValue;

    MultipleDisplay(iValue);

    return 0;
}