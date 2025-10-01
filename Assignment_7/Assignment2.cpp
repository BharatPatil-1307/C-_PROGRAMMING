#include<iostream>
using namespace std;

int DollerToINR(int No)
{
    int iDoller = 70;

    iDoller = iDoller * No;

    return iDoller;
}

int main()
{
    int iValue = 0, iRet = 0;
    cout <<"Enter the Doller to Check Indian Curruncy :";
    cin >> iValue;

    iRet = DollerToINR(iValue);
    cout <<"Value in INR is :" << iRet <<"\n";

    return 0;
}