#include<iostream>
using namespace std;

void Display()
{
    static int i = 0;
    if(i <= 5)
    {
        cout <<"*\t";
        i++;
        Display();
    }
}

int main()
{
    Display();
    cout <<"\n";

    return 0;
}