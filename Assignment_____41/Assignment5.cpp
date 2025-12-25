#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1; 
    static char ch = 'a';

    if(i <= iNo)
    {
        cout <<ch<<"\t";
        ch++;
        i++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the Number :";
    cin>> iValue;
    Display(iValue);
    cout <<"\n";

    return 0;
}