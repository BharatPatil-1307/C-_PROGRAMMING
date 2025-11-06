#include <iostream>
using namespace std;

void StrCatX(char *src, char *dest)
{
    // Move src pointer to end of first string
    while (*src != '\0')
    {
        src++;
    }

    // Add a space between strings
    *src = ' ';
    src++;

    // Copy dest string to end of src
    while (*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }

    *src = '\0'; // Null-terminate the final string
}

int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";

    cout << "Actual String is: " << arr << endl;
    cout << "String to Concatenate: " << brr << endl;

    StrCatX(arr, brr);

    cout << "After Concatenation: " << arr << endl;

    return 0;
}
