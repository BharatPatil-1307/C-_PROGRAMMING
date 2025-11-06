#include<iostream>
using namespace std;

void StrCpySmall(char *str , char *dest)
{
    while(*str != '\0')
    {
        // copy only lowercase letters or spaces
        if(((*str >= 'a') && (*str <= 'z')) || (*str == ' '))
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
    *dest = '\0';  // terminate destination string
}

int main()
{
    char Arr[30] = "Marvellous multi OS";
    char Brr[30];
    
    StrCpySmall(Arr , Brr);

    printf("Actually String is : %s\n", Arr);
    printf("Updated String is : %s\n", Brr);

    return 0;
}
