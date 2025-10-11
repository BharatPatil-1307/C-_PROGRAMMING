/* Quetion :    Accept N numbers from user and accept one another number as NO ,
                return frequency of NO form it.*/

#include<iostream>
using namespace std;

int Frequency(int Arr[], int iLength, int iCheck)
{
    int iCnt = 0, iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iCheck)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iCheckDigit = 0;
    int *Ptr = NULL;

    cout << "Enter the Number of Elements: ";
    cin >> iSize;

    Ptr = new int[iSize];

    if (Ptr == NULL)
    {
        cout << "Unable to allocate memory\n";
        return -1;
    }

    cout << "Enter the Elements:\n";
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Element " << iCnt + 1 << ": ";
        cin >> Ptr[iCnt];
    }

    cout << "\nEnter the Number to Check Frequency: ";
    cin >> iCheckDigit;

    iRet = Frequency(Ptr, iSize, iCheckDigit);

    cout << "\nFrequency of number " << iCheckDigit << " is: " << iRet << endl;

    cout << "\nElements are: ";
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << Ptr[iCnt] << "\t";
    }
    cout << endl;

    delete [] Ptr;

    return 0;
}

