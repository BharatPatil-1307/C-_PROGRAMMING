#include<iostream>
using namespace std;

int ProductOfOdd(int Arr[], int iLength)
{
    int iCnt = 0;
    int iProduct = 1;
    bool bOddFound = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)   // Check for odd number
        {
            iProduct = iProduct * Arr[iCnt];
            bOddFound = true;
        }
    }

    if(bOddFound == false)
    {
        return 0;   // No odd elements found
    }

    return iProduct;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    cout << "Enter number of elements: ";
    cin >> iSize;

    ptr = new int[iSize];

    if(ptr == NULL)
    {
        cout << "Unable to allocate memory\n";
        return -1;
    }

    cout << "Enter the elements:\n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Element " << iCnt + 1 << " : ";
        cin >> ptr[iCnt];
    }

    iRet = ProductOfOdd(ptr, iSize);

    cout << "Product of all odd elements is : " << iRet << endl;

    delete[] ptr;
    return 0;
}