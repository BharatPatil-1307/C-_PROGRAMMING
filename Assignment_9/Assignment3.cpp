#include<iostream>
using namespace std;

int CountTwo(int No)
{
    int iDigit = 0, iCount = 0;
    if(No == 2)
    {
        return iCount+1;
    }

    while(No != 0)
    {
        iDigit = No % 10;
        if(iDigit == 2)
        {
            iCount++;
        }
        No = No / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;
    cout <<"Enter the Number to check Frequency of 2 in it :";
    cin >> iValue;

    iRet = CountTwo(iValue);

    cout <<"Frequency is 2 is :" << iRet << endl;

    return 0;
}