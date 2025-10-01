#include<iostream>
using namespace std;

void Display(int No)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= No; iCnt++)
    {
        cout << " *\t";
    }
    for(iCnt = 1; iCnt <= No; iCnt++)
    {
        cout << " #\t";
    }
    cout <<"\n";
}

int main()
{
    int iValue = 0;
    cout <<"Enter the Number :";
    cin >> iValue;

    Display(iValue);

    return 0;
}