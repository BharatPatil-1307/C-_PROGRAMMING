#include<iostream>
using namespace std;

int CheckFirstOccurence(int Arr[] , int iLength , int No)
{
    int iCnt = 0 ;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
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
    int iSize = 0 , iRet = 0 , iCnt = 0 , iValue = 0 ;
    int *ptr = NULL;


    cout << "Enter the Number of Elements :";
    cin >> iSize;

    cout << "Enter the Number That You want to Check First Occurence :";
    cin >> iValue;

    ptr = new int[iSize];

    if(ptr == NULL)
    {
        cout << "Unable to allocate the memory\n";
    }

    cout << "Enter the Elements :\n";
    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        cout << "Elements " << iCnt <<" : ";
        cin >> ptr[iCnt];
    }

    iRet = CheckFirstOccurence(ptr , iSize , iValue);

    if(iRet == -1)
    {
        cout << "Thare is no such Elements\n";
    }
    else
    {
        cout << "First occurence of number is :" << iRet << endl; 
    }

    return 0;
}