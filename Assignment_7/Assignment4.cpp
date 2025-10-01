#include <iostream>
using namespace std;

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        cout << "INVALID INPUT ❌: Negative value is not allowed for Odd Factorial, "
             << "but I am considering it as a positive value.\n";
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 1)
        {
            cout << iCnt << " * ";
            iFact = iFact * iCnt;
        }
    }
    cout << endl;
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter Number: ";
    cin >> iValue;

    iRet = OddFactorial(iValue);

    cout << "Odd Factorial Of Number Is " << iRet << endl;

    return 0;
}
