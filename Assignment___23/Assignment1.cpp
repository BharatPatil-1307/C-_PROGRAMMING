#include<iostream>
#include <ctype.h>

using namespace std;

void DisplayASCII()
{
    int i;

    cout << "Dec\tHex\tOct\tChar\n";
    cout << "----\t----\t----\t----\n";

    for (i = 0; i <= 127; i++)
    {
        cout << i << i << i << "%3d\t%02X\t%03o\t";

        if (isprint(i))
            cout << i << "\n";
        else
            printf(".\n");
    }

}

int main()
{
    DisplayASCII();

    return 0;
}