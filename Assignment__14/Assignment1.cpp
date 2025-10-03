#include<iostream>
using namespace std;

void Pattern(int Rows, int Columns)
{
    int i = 0, j = 0;
    int iDigit = 0;
    for(i = 0; i < Rows; i++)
    {
        for(j = 0; j < Columns; j++)
        {
            iDigit++;
            cout << iDigit << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    cout <<"Enter the Rows :";
    cin >> iValue1;

    cout <<"Enter the Columns :";
    cin >> iValue2;

    Pattern( iValue1, iValue2 );

    return 0;
}