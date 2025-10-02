#include <iostream>
using namespace std;

int DiffEvenOddDigits(int iNo)
{
    int iDigit = 0;
    int EvenSum = 0, OddSum = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        
            EvenSum += iDigit;
        else
            OddSum += iDigit;

        iNo = iNo / 10;
    }
   
    return (EvenSum - OddSum);
}

int main()
{
    int iValue = 0, iRet = 0;   

    cout << "Enter number: ";
    cin >> iValue;

    iRet = DiffEvenOddDigits(iValue);

    cout << "Difference between even and odd digit sum: " << iRet << "\n";
    return 0;
}
