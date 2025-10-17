#include<iostream>
#include<stdlib.h>

using namespace std;

int Maximun(int Arr[] , int iLength)
{
    int iCnt = 0 , iMix = Arr[0];
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        if(iMix <= Arr[iCnt])
        {
            iMix = Arr[iCnt];
        }
    }
    return iMix;
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

    iRet = Maximun(ptr , iSize);

    cout << "Maximum Number is :" << iRet << endl;


    return 0;
}
