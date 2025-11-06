#include <iostream>
#include <fcntl.h>      // For open()
#include <unistd.h>     // For close(), read()
#include <sys/stat.h>   // For file information (stat)
using namespace std;

int main()
{
    char fname[30];
    struct stat fileInfo;   // Structure to store file information
    int ret = 0;

    cout << "Enter the file name : ";
    cin >> fname;

    // Get file information using stat()
    ret = stat(fname, &fileInfo);

    if (ret == -1)
    {
        cout << "Unable to get file information." << endl;
        return -1;
    }

    cout << "File size is " << fileInfo.st_size << " bytes" << endl;

    return 0;
}
