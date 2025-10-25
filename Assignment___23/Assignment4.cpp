#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSpecial(char ch )
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && (ch <= 'Z')))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    cout << "Enter the Charecter :";
    cin >> cValue;

    bRet = CheckSpecial(cValue);

    if(bRet == TRUE)
    {    
        cout << "It is Special Charecter\n";
    }
    else
    {
        cout << "It is not Special Charecter\n";
    }


    return 0;
}