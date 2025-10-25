#include<iostream>
#include<string>
using namespace std;

int SmallCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr [100];
    int iRet = 0;

    cout << "Enter the Charecter :";
    cin.getline(Arr , 100);

    iRet = SmallCapital(Arr);

    cout << "Small Charecters Are :" << iRet << endl;

    return 0;
}