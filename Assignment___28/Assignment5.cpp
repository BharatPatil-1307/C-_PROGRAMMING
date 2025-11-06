#include <iostream>
#include <fcntl.h>      // For open()
#include <unistd.h>     // For write(), close()
#include <string.h>     // For strlen()
using namespace std;

int main()
{
    int fd = 0;
    char fname[30];
    char str[100];

    cout << "Enter the file name : ";
    cin >> fname;

    // Clear input buffer before taking full line as string
    cin.ignore();

    cout << "Enter the string you want to write : ";
    cin.getline(str, sizeof(str));

    // Open file in write-only mode with append flag
    fd = open(fname, O_WRONLY | O_APPEND);

    if (fd == -1)
    {
        cout << "Unable to open file." << endl;
        return -1;
    }

    // Write the string at the end of file
    write(fd, str, strlen(str));

    cout << "String successfully written at the end of file." << endl;

    close(fd);
    return 0;
}
