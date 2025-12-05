#include<iostream>
using namespace std;

template<class T>
int FirstOcc(T *arr, int iSize , T iNo)
{
    for(int i = 1; i <= iSize; i++)
    {
        if(arr[i] == iNo)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int Arr1[] = {10, 21, 30, 20, 40, 50, 20, 60};
    int iSize = 7;

    int iPos = FirstOcc(Arr1, iSize, 20);
    cout << "First occurrence of 20 in integer array at index: " << iPos << "\n";

    float Arr2[] = {1.5, 2.5, 3.0, 2.5, 4.5};
    int fSize = 5;

    int fPos = FirstOcc(Arr2, fSize, 2.5f);
    cout << "First occurrence of 2.5 in float array at index: " << fPos << "\n";


    return 0;
}