#include<iostream>
using namespace std;

int CheckLastOccurrence(int Arr[], int iLength, int No)
{
    int iCnt = 0;
    for(iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == No)
        {
            return iCnt; 
        }
    }
    return -1;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;

    cout << "Enter the Number of Elements : ";
    cin >> iSize;

    cout << "Enter the Number that you want to check last occurrence of : ";
    cin >> iValue;

    ptr = new int[iSize];

    if(ptr == NULL)
    {
        cout << "Unable to allocate the memory\n";
        return -1;
    }

    cout << "Enter the Elements :\n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Element " << iCnt << " : ";
        cin >> ptr[iCnt];
    }

    iRet = CheckLastOccurrence(ptr, iSize, iValue);

    if(iRet == -1)
    {
        cout << "There is no such element\n";
    }
    else
    {
        cout << "Last occurrence of number is at index : " << iRet << endl;
    }

    delete[] ptr;
    return 0;
}
