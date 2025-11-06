#include <iostream>
#include <fcntl.h>      // For open()
#include <unistd.h>     // For read(), close()
using namespace std;

int main()
{
    int fd = 0;           // File descriptor
    char fname[30];       // File name
    char buffer[1024];    // Buffer to store file data
    ssize_t bytesRead;    // To store how many bytes were read

    cout << "Enter the file name : ";
    cin >> fname;

    // Open the file in read-only mode
    fd = open(fname, O_RDONLY);

    if (fd == -1)
    {
        cout << "Unable to open the file." << endl;
        return -1;
    }

    cout << "\n--- File Contents ---\n\n";

    // Read file content in chunks and display
    while ((bytesRead = read(fd, buffer, sizeof(buffer) - 1)) > 0)
    {
        buffer[bytesRead] = '\0'; // Null terminate for safe printing
        cout << buffer;
    }

    cout << "\n\n--- End of File ---\n";

    close(fd); // Close the file
    return 0;
}
