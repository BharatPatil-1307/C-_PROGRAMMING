#include<iostream>
using namespace std;

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++, ch++)
    {
        cout << ch <<"\t";
    }
    cout <<"\n";
}

int main()
{
    int iValue = 0;

    cout <<" Enter The Number :";
    cin >>iValue;

    Pattern(iValue);

    return 0;
}