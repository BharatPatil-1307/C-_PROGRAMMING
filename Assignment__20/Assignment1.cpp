#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckNumber(int Arr[], int iLength, int No)
{
    int i = 0;
    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == No)
        {
            return TRUE;
        } 
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0;
    BOOL bRet = FALSE;
    int *ptr = NULL;

    cout << "Enter the Number of Elements : ";
    cin >> iSize;

    cout << "Enter the Number to Check if it is Present or Not : ";
    cin >> iNo;

    ptr = new int[iSize];

    if(ptr == NULL)
    {
        cout << "Unable to allocate memory\n";
        return -1;
    }

    cout << "Enter the Elements :\n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Element " << iCnt + 1 << " : ";
        cin >> ptr[iCnt];
    }

    bRet = CheckNumber(ptr, iSize, iNo);

    if(bRet == TRUE)
    {
        cout << "Number is Present\n";
    }
    else 
    {
        cout << "Number is Not Present\n";
    }

    delete[] ptr;
    return 0;
}
