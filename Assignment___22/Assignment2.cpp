#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckChapitalOrNot(char ch)
{
    BOOL bFlag = FALSE;


    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = CheckChapitalOrNot(cValue);

    if(bRet == TRUE)
    {
        cout << "It is Chapital Charecter\n";
    }
    else
    {
        cout << "Is is Not Chapital Charecter\n";
    }


    return 0;
}