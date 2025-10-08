#include<iostream>
using namespace std;

void Paterrn(int iRow , int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j <= i)
            {
                cout << "*\t";
            }
            else
            {
                cout << " \t";
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

    Paterrn(iValue1 , iValue2);

    return 0;
}