#include<iostream>
#include<string>
using namespace std;

int Difference(char *str)
{
    int iCapital = 0 , iSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        str++;
    }
    cout <<"(" << iCapital <<" - " << iSmall <<")\n";
    return (iCapital - iSmall);
}

int main()
{
    char Arr [100];
    int iRet = 0;

    cout << "Enter the Charecter :";
    cin.getline(Arr , 100);

    iRet = Difference(Arr);

    cout << "Difference Charecters Are :" << iRet << endl;

    return 0;
}