#include<iostream>
using namespace std;

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i == j))
            {
                printf("*\t");
            }
            else if(i > j)
            {
                printf("$\t");
            }
            else
            {
                printf("#\t");
            }

        }
        cout << "\n";
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    cout << "Enter the Rows :";
    cin >> iValue1;
    cout << "Enter the Colums :";
    cin >> iValue2;

    Pattern(iValue1 , iValue2);

    return 0;
}