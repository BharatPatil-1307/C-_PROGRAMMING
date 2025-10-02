#include<iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            cout << j <<"\t";
        }
        cout <<"\n";
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout <<"Enter Number Of Rows :";
    cin >>iValue1;

    cout <<"Enter Number Of Coloms :";
    cin >>iValue2;

    Pattern(iValue1,iValue2);

    return 0;
}