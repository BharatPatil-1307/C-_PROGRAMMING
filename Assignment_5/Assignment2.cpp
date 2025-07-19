#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    
    cout<<"OutPut :";
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number :";
    cin>>iValue;

    Display(iValue);

    return 0;
}