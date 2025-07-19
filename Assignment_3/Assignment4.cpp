#include<iostream>
using namespace std;

void DisplayConvert(char cValue)
{
    char ch = '\0';

    if((cValue >= 'a') && (cValue <= 'z'))
    {
        cout<<"Converted Charecter Is :"<<char (cValue-32);
        cout<<"\n";
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        cout<<"Converted Charecter Is :"<<char (cValue+32);
        cout<<"\n";
    }  
}
int main()
{
    char cValue = '\0';

    cout<<"Enter Character  :";
    cin>>cValue;

    DisplayConvert(cValue);

    return 0;
}