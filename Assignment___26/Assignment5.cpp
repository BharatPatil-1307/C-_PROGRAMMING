#include<iostream>
using namespace std;

void StrRevX(char *str)
{
    char *Start = str;
    char *End = str;
    char temp = '\0';

    while(*End != '\0')
    {
        End++;
    }
    End--;
    while(Start <= End)
    {
        temp = *Start ;
        *Start = *End;
        *End = temp ;
        Start ++;
        End--;
    }
}

int main()
{
    char Arr[50];
    cout << "Enter the String :";
    cin.getline(Arr , 50);

    StrRevX(Arr);
    cout << "After Reversing String is :" << Arr <<"\n";

    return 0;
}