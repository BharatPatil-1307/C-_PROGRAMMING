#include<iostream>
using namespace std;

void Display(char ch)
{
   if((ch >= 'A')&&(ch <= 'Z'))
    {
        while(ch <='Z')
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch);
            ch--;
        }
        printf("\n");
    }
    else
    {
        printf("%c Invaild input\n",ch);
    }
}

int main()
{
    char cValue = '\0';

    cout << "Enter the Charecter :";
    cin >> cValue;

    Display(cValue);

    return 9;
}