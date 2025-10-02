#include<iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'A';
    char cha = 'a';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'A', cha = 'a'; j <= iCol; j++, ch++, cha++)
        {
            if(i % 2 == 0)
            {
                cout << cha << "\t"; 
            }
            else
            {
                cout << ch << "\t";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout <<"Enter The Number Of Rows : ";
    cin >> iValue1;

    cout <<"Enter The Number Of Colums : ";
    cin >> iValue2;

    Pattern(iValue1, iValue2);

    return 0;
}
