#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        cout<<"INVALID INPUT : I Concidering Possitive Number..";
        iNo = -iNo;
    }
    while(iCnt < iNo)
    {
        cout<<"*\t";
        iCnt++;
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