#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if((CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U' ||CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{

    char cValue = '\0';
    BOOL bRet = FALSE;

    cout<<"Enter Charecter\n";
    cin>>cValue;

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        cout<<"It is Vowel\n";
    }
    else
    {
        cout<<"It Not Vowel\n";
    }

    return 0;
}