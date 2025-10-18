#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= '0') && (ch <= '9'))
    {
        bFlag = TRUE;
    }
    return bFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    cout << "Enter Charecter :";
    cin >> cValue;

    bRet = CheckDigit(cValue);

    if(bRet == TRUE)
    {
        cout << "It is Digit\n";
    }
    else
    {
        cout << "Is is Not Digit\n";
    }


    return 0;
}