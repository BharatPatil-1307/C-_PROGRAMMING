#include<iostream>
using namespace std;

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    cout << "\nNumbers in the given range are:\n";
    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            cout << Arr[iCnt] << "\t";
        }
    }
    cout << endl;
}

int main()
{
    int iSize = 0, iStart = 0, iEnd = 0;
    int *ptr = NULL;

    cout << "Enter number of elements: ";
    cin >> iSize;

    cout << "Enter the starting point: ";
    cin >> iStart;

    cout << "Enter the ending point: ";
    cin >> iEnd;

    ptr = new int[iSize];

    if(ptr == NULL)
    {
        cout << "Unable to allocate memory.\n";
        return -1;
    }

    cout << "Enter numbers:\n";
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Element " << iCnt + 1 << " : ";
        cin >> ptr[iCnt];
    }

    Range(ptr, iSize, iStart, iEnd); 

    delete[] ptr;

    return 0;
}