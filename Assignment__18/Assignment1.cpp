/* Quetion :    Accept N numbers from user and return difference between summation
                of even elements and summation of odd elements. */
                
#include <iostream>
using namespace std;

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }

    return (iEvenSum - iOddSum);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    cout << "Enter number of elements: ";
    cin >> iSize;

    p = new int[iSize];

    if (p == NULL)
    {
        cout << "Unable to allocate memory" << endl;
        return -1;
    }

    cout << "Enter " << iSize << " elements:" << endl;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout << "Enter element " << iCnt + 1 << ": ";
        cin >> p[iCnt];
    }

    iRet = Difference(p, iSize);

    cout << "Result is: " << iRet << endl;

    delete[] p;

    return 0;
}
