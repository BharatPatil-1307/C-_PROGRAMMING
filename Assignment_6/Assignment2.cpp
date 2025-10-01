#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    if(iNo == 1)
    {
        cout <<"Number is : One\n";
    }
    else if(iNo == 2)
    {
       cout <<"Number is : Two\n"; 
    }
    else if(iNo == 3)
    {
       cout <<"Number is : Three\n"; 
    }
    else if(iNo == 4)
    {
       cout <<"Number is : Four\n"; 
    }
    else if(iNo == 5)
    {
       cout <<"Number is : Five\n"; 
    }
    else if(iNo == 6)
    {
       cout <<"Number is : Six\n"; 
    }
    else if(iNo == 7)
    {
       cout <<"Number is : Seven\n"; 
    }
    else if(iNo == 8)
    {
       cout <<"Number is : Eight\n"; 
    }
    else if(iNo == 9)
    {
       cout <<"Number is : Nine\n"; 
    }
    else
    {
        cout <<"Invalid Input\n";
    }
}

int main()
{
    int iValue = 0;
    cout <<"Enter the Only single Digits :";
    cin >> iValue;

    Display(iValue);

    return 0;
}