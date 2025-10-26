#include<iostream>
using namespace std;

int FirstOccurence(char *str , char ch)
{
    int iPos = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iPos;
        }
        str++;
        iPos++;
    }
    return -1;
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

    iRet = FirstOccurence(Arr , cValue);
    if(iRet == -1)
    {
        cout << "Charecter Not Found is String : " << iRet <<"\n";
    }
    else
    {
        cout << "Charecter location is :" << iRet <<"\n";
    }


    return 0;
}