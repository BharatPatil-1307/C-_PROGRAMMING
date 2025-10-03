#include<iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0;
    for(i = 1; i <= iRow; i++)
    {
        int iCnt = 1;
        for(j = 1; j <= iCol; j++, iCnt++)
        {
            if((i == 1) ||( i == iCol)||(j == 1)||(j == iCol))
            {
                cout << iCnt <<"\t";
            }
            else
            {
                cout << "*\t";
            }
        }
        cout << endl;
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