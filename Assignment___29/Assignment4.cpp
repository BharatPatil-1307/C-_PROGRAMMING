#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include <fcntl.h>      // for open()
#include <unistd.h>     // for read(), close()

using namespace std;

int CountChar(char fName[] , char ch)
{
    int fd = 0 , iRet = 0, iCnt = 0;
    char Buffer[1024];
    int i = 0;

    fd = open(fName , O_RDONLY);

    if(fd == -1)
    {
        cout << "Unble to open file\n";
        return -1;
    }
    
    while((iRet = read(fd, Buffer, sizeof(Buffer))) > 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] == ch)
            {
                iCnt++;
            }
        }
    }
    close(fd);
    return iCnt;
}

int main()
{
    char FileName[30];
    char ch = '\0';
    int iRet = 0;

    cout << "Enter the File Name :";
    cin >> FileName;

    cout << "Enter the number :";
    cin >> ch;

    iRet = CountChar(FileName , ch);

    cout << "Frequency of " << ch <<"is :" << iRet << endl;

    return 0;
}