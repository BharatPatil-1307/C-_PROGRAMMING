#include<iostream>
using namespace std;

void Display()
{
    static int i = 1;
    static int iNo = 5 ;
    if(i <= 5)
    {
        cout << iNo <<"\t";
        iNo--;
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