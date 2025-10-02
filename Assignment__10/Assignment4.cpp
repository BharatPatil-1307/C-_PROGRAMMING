#include <iostream>
using namespace std;

int MultiDigit(int iNo)
{
    int iDigit = 0 ;
    int iMulti = 1 ;

    if(iNo < 0 )
    {
        iNo= -iNo;
    }

   while(iNo!= 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)
        {
            iMulti = iMulti * iDigit;
        }
  
        iNo = iNo / 10;
    }
    return iMulti;
}


int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number : ";
    cin >> iValue;

    iRet = MultiDigit(iValue);

    cout << "Multiplication of digits is : " << iRet << "\n";

    return 0;
}
