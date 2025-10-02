#include<iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iDigit = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            iDigit++;
            cout << iDigit <<"\t";
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