#include<iostream>
using namespace std;

int LastOccurence(char *str , char ch)
{
    int iPos = 0;
    int iLastPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLastPos = iPos;
        }
        str++;
        iPos++;
    }
    return iLastPos;
}

int main()
{
    char Arr[50];
    char cValue = '\0';
    int iRet = 0;

    cout << "Enter the String :";
    cin.getline(Arr , 50);
    cout << "Enter the Charecter :";
    cin >> cValue;

    iRet = LastOccurence(Arr , cValue);
    if(iRet == -1)
    {
        cout << "Charecter Not Found is String : " << iRet <<"\n";
    }
    else
    {
        cout << "Charecter Last location is :" << iRet <<"\n";
    }


    return 0;
}