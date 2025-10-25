#include<iostream>
#include<string>
using namespace std;

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(Arr);

    cout << "Capitale Charecters Are :" << iRet << endl;

    return 0;
}