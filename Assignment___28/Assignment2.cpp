#include <iostream>
#include <fcntl.h>      // For open()
#include <unistd.h>     // For close()
#include <sys/types.h>  // For mode_t
#include <sys/stat.h>   // For file permissions
using namespace std;

int main()
{
    int fd = 0;
    char ch[20];

    cout << "Enter the File name :";
    cin >> ch;

    fd = open(ch, O_RDONLY);
    if (fd != -1)
    {
        cout << "File already exists.\n";
        close(fd);
    } 
    else
    {
        fd = open(ch , O_RDWR|O_CREAT , 0777);

        if(fd == -1)
        {
            cout << "Unbale to create file\n";
        }
        else
        {
            cout << "File Succesfully Create FD :" << fd <<"\n";
            close(fd);
        }
    }


    return 0;
}