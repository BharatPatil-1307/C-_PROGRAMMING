#include<iostream>
using namespace std;

void Display()
{
    static int i = 1;
    if(i <= 5)
    {
        cout << i <<"\t";
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