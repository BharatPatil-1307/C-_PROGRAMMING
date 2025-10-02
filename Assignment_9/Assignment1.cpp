#include<iostream>
using namespace std;

void DisplayReversDigit(int No)
{
    int iDigit = 0;
    if(No < 0)
    {
        No = -No;
    }
    cout <<"Output :" << endl;
    while(No != 0)
    {
        iDigit = No % 10;
        cout << iDigit <<"\n";
        No = No / 10;
    }
}

int main()
{
    int iValue = 0;
    cout <<"Enter the Number :";
    cin >>iValue;

    DisplayReversDigit(iValue);

    return 0;
}