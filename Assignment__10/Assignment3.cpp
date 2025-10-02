#include <iostream>
using namespace std;

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if (iNo < 0)   // Handle negative numbers
    {
        iNo = -iNo;
    }

    if (iNo == 0)  // Special case: if input is 0
    {
        return 0;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;       // Extract last digit

        if (iDigit >= 3 && iDigit <= 7)  // Check range
        {
            iCnt++;
        }

        iNo = iNo / 10;          // Remove last digit
    }

    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number : ";
    cin >> iValue;

    iRet = CountRange(iValue);

    cout << "Count of digits between 3 and 7 is : " << iRet << "\n";

    return 0;
}
