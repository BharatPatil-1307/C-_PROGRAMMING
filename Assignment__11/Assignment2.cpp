#include<iostream>
using namespace std;

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        cout << iCnt <<"\t";
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;

    cout <<" Enter The Number :";
    cin >>iValue;

    Pattern(iValue);

    return 0;
}