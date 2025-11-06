#include<iostream>
using namespace std;

void StrNCpy(char *str , char *dest, int iCnt)
{
    while((*str != 0) && (iCnt != 0))
    {
        *dest = *str;
        str++;
        dest++;
        iCnt--;
    }
    dest--;
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];
    
    StrNCpy(Arr , Brr , 10);

    printf("Atculy String is : %s\n",Arr);
    printf("Updated String is : %s\n",Brr);

    return 0;
}