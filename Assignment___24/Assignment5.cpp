#include<iostream>
using namespace std;

void Reverse(char *str)
{
    char *Start = str;
    char *End = str;
    char temp = '\0';

    while(*End != '\0')
    {
        End++;
    }
    End--;

    // Reverse 
    while(Start < End) 
    {
        temp = *Start;
        *Start = *End;
        *End = temp;
        Start++;
        End--;
    }
}


int main()
{
    char Arr[50];

    cout << "Enter the String :";
    cin.getline(Arr , 50);
    Reverse(Arr);

    cout << "Reverse String is :" << Arr <<"\n";

    return 0;
}