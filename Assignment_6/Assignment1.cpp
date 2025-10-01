#include<iostream>
using namespace std;

void Number(int No)
{
    if(No <= 0)
    {
        No = -No;
    }

    if(No <= 50)
    {
        cout <<"Output : Small\n";
    }
    else if((No > 50) && (No <= 100))
    {
        cout <<"Output : Medium\n";
    }
    else
    {
        cout <<"Output : Large\n";
    }
}

int main()
{
    int iValue = 0;

    cout <<"Enter the Number :";
    cin >> iValue;
    Number(iValue);

    return 0;
}