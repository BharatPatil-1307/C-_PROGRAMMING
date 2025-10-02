#include<iostream>
using namespace std;

void Pattern(int iNo)
{
    int iCnt = 0;
    int iMul = 2;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<< iMul <<"\t";
        iMul += 2;
    }
    cout <<"\n";
}

int main()
{
    int iValue = 0;

    cout <<"Enter Number :";
    cin >> iValue;

    Pattern(iValue);

    return 0;
}