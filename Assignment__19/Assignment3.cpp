/* Quetion :    Accept N numbers from user check whether that numbers contains 11 in
                it or not. */

#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++) 
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0;
    BOOL bRet = FALSE;
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

    bRet = Check(Ptr, iSize);

    if(bRet == TRUE)
    {
        cout <<"\nOutput : 11 is Present..\n";
    }
    else
    {
        cout <<"\nOutput : 11 is Absent..\n";
    }

    cout << "\nEntered Elements are : ";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Ptr[iCnt] << "\t";
    }
    cout << "\n";

    delete[] Ptr; 

    return 0;
}