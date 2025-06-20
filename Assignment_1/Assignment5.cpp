#include<iostream>
using namespace std;

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<"*\n";
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}