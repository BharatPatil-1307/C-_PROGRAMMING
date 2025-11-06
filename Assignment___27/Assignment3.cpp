#include<iostream>
using namespace std;

void StrCpyCap(char *str , char *dest)
{
    while(*str != 0)
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
    dest--;
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];
    
    StrCpyCap(Arr , Brr);

    printf("Atculy String is : %s\n",Arr);
    printf("Updated String is : %s\n",Brr); // MMOS

    return 0;
}