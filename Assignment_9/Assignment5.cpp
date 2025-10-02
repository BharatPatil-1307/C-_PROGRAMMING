#include<iostream>
using namespace std;

int Count(int No)
{
    int iDigit = 0, iCount = 0;
    if(No == 2)
    {
        return iCount+1;
    }

    while(No != 0)
    {
        iDigit = No % 10;
        if(iDigit < 6)
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
    cout <<"Enter the Number to check Frequency of less than 6 in it :";
    cin >> iValue;

    iRet = Count(iValue);

    cout <<"Frequency is 6 less than is :" << iRet << endl;

    return 0;
}