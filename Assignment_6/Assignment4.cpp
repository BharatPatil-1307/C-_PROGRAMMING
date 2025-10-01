#include<iostream>
using namespace std;

void Table(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
    if(iNo < 0)
    {
        cout <<"INVALID INPUT\n";
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d ⤬ %d = %d\n",iNo,iCnt,iNo * iCnt);
    }
    cout <<"\n";
}

int main()
{
    int iValue = 0;
    cout <<"Enter the Number :";
    cin >> iValue;

    Table(iValue);

    return 0;
}