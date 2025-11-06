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

    fd = open(ch , O_RDONLY);

    if(fd == -1)
    {
        cout << "Unbale to open file\n";
    }
    else
    {
        cout << "File Succesfully open with FD : " << fd <<"\n";
        close(fd);
    }


    return 0;
}