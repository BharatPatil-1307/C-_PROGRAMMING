/* Quetion :    Accept N numbers from user and display all such elements which are
                divisible by 3 and 5. */

#include <iostream>
using namespace std;

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    cout << "Result is : ";
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 3) == 0)
        {
            cout << Arr[iCnt] <<"\t";
        }
    }
    cout <<"\n";

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

    Display(p , iSize);

    delete[] p;

    return 0;
}
