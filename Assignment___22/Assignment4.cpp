#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        cout << cValue << " : "<< "It is Small Case Charecter\n";
    }
    else   
    {
        cout << cValue << " : " << "Is is Not Small Case Charecter\n";
    }

    return 0;
}
