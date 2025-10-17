#include<iostream>
#include<stdlib.h>

using namespace std;

int Minimum(int Arr[] , int iLength)
{
    int iCnt = 0 , iMin = Arr[0];
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        if(iMin >= Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Minimum(ptr , iSize);

    cout << "Minimum Number is :" << iRet << endl;


    return 0;
}
