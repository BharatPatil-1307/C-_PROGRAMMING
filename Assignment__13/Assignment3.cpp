#include<iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'A';
    for(i = 0; i < iRow; i++, ch++)
    {
        for(j = 0; j < iCol; j++)
        {
            cout << ch <<"\t";
        }
        cout <<"\n";
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter the Number of Rows :";
    cin >> iValue1;

    cout << "Enter the Number of Colums :";
    cin >> iValue2;

    Pattern(iValue1 , iValue2);

    return 0;
}