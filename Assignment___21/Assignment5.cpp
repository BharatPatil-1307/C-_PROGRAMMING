#include<iostream>
#include<stdlib.h>

using namespace std;

void DigitSummation(int Arr[], int iLength)
{
    int iCnt = 0 , iNo = 0, iSum = 0;

    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];

        iSum = 0 ;
        while(iNo != 0)
        {
            iSum += iNo % 10 ;
            iNo = iNo / 10;
        }    
        cout << iSum <<"\t";
    }
    cout << "\n"; 
}



int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int * ptr = NULL;

    cout << "Enter the Number :";
    cin >> iSize;

    ptr = new int[iSize];

    if(ptr == NULL)
    {
        cout << "Unable to allocate the memory\n";
    }

    cout << "Enter the Elements :\n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Elements " << iCnt <<" : ";
        cin >> ptr[iCnt];
    }

    cout << "Arry of Elements is :";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout <<"\t" << ptr[iCnt];
    }
    cout << "\n";

    DigitSummation(ptr , iSize);

    return 0;
}
