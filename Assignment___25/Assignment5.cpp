#include<iostream>
using namespace std;

int CoutnWhiteSpace(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    cout << "Enter the String :";
    cin.getline(Arr , 50);
    iRet = CoutnWhiteSpace(Arr);

    cout << "Total White Spaces Are : "<< iRet <<"\n";

    return 0;
}