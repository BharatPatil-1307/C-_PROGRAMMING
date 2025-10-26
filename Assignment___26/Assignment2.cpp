#include<iostream>
using namespace std;

int Frequency(char *str , char ch)
{
    int iCount = 0;
    if(ch )
    while(*str != '\0')
    {
        if(*str == ch)
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
    char cVaclue = '\0';
    int iRet = 0;

    cout << "Enter the String :";
    cin.getline(Arr , 50);
    cout << "Enter the Charecter :";
    cin >> cVaclue;

    iRet = Frequency(Arr , cVaclue);

    cout << "Frequency of that number is :" << iRet <<"\n";

    return 0;
}