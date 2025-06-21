#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo < 10)
    {
        cout<<"OutPut : Hello\n";
    }
    else
    {
        cout<<"OutPut : Demo\n";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter Number :";
    cin>>iValue;

    Display(iValue);

    return 0;
}