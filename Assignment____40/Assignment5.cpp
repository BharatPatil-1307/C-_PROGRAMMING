#include<iostream>
using namespace std;

void Display()
{
    static char ch = 'a';
    if(ch <= 'f')
    {
        cout << ch <<"\t";
        ch++;
        Display();
    }
}

int main()
{
    Display();
    cout <<"\n";

    return 0;
}