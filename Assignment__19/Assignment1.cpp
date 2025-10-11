/* Quetion : Accept N numbers from user and return frequency of even numbers.*/

#include<iostream>
using namespace std;

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++) 
    {
        if(Arr[iCnt] % 2 == 0)  
        {
            iCount++;         
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *Ptr = NULL;

    cout << "Enter the Number of Elements : ";
    cin >> iSize;

    Ptr = new int[iSize];

    if(Ptr == NULL)
    {
        cout << "Unable to allocate memory\n";
        return -1;
    }

    cout << "Enter the Elements :\n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Enter Element " << iCnt + 1 << " : ";
        cin >> Ptr[iCnt];
    }

    iRet = CountEven(Ptr, iSize);

    cout << "\nNumber of Even Elements is : " << iRet << "\n";

    cout << "\nEntered Elements are : ";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Ptr[iCnt] << "\t";
    }
    cout << "\n";

    delete[] Ptr; 

    return 0;
}
