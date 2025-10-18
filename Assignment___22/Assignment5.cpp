#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        cout << "Your exam at 7 AM\n";
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        cout << "Your exam at 8:30 AM\n";
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        cout << "Your exam at 9:20 AM\n";
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        cout << "Your exam at 10:30 AM\n";
    }
    else
    {
        cout << "Plese Enter the Valid Divition Option : A , B , C , D\n";
    }
}

int main()
{
    char cValue = '\0';
    
    cout << "Enter the Divition : ";
    cin >> cValue;

    DisplaySchedule(cValue);
}