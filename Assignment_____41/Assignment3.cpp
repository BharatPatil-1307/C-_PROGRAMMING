#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1; 
    static int iNo1 = 5;

    if(i <= iNo)
    {
        cout <<iNo1 <<"\t";
        iNo1--;
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