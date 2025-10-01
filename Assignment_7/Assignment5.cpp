#include <iostream>
using namespace std;

int EvenOddFactorial(int iNo)
{
    int iCnt = 0;
    int iEven = 1;
    int Odd = 1;

    if (iNo < 0)
    {
        cout << "INVALID INPUT ❌: Negative value is not allowed for Factorial, "
             << "but I am considering it as a positive value.\n";
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iEven = iEven * iCnt;
        }
        else
        {
            Odd = Odd * iCnt;
        }
    }
    cout << iEven <<" - " << Odd <<"\n";
    return iEven -  Odd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter Number: ";
    cin >> iValue;

    iRet = EvenOddFactorial(iValue);

    cout << "Even Odd Factorial Of Number Is : " << iRet << endl;

    return 0;
}
