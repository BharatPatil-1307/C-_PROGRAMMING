#include <iostream>
#include <fstream>   // for file handling
#include <string>
using namespace std;

void DisplayN(const string &fileName, int count)
{
    ifstream file(fileName, ios::in);  // open file in read mode

    if (!file)
    {
        cout << "Unable to open file." << endl;
        return;
    }

    char *buffer = new char[count + 1];   // dynamic memory for reading data

    file.read(buffer, count);             // read 'count' characters
    int bytesRead = file.gcount();        // get actual number of characters read
    buffer[bytesRead] = '\0';             // null terminate

    cout << "Data from file:" << endl;
    cout << buffer << endl;

    delete[] buffer;                      // free memory
    file.close();                         // close file
}

int main()
{
    string fileName;
    int n = 0;

    cout << "Enter file name: ";
    cin >> fileName;

    cout << "Enter the number of characters: ";
    cin >> n;

    DisplayN(fileName, n);

    return 0;
}
