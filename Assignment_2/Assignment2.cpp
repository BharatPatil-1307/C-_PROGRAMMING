#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        cout<<"\nINVALID INPUT : I Concidering Possitive Number..\n";
        iNo = -iNo;
    }

    while(iNo > iCnt)
    {
        cout<<"*\t";
        iNo--;
    }
    cout<<"\n";
}

int main()
{

    int iValue = 0;

    cout<<"Enter The Number That you Want * On Screen :";
    cin>>iValue;

    Display(iValue);


    return 0;
}