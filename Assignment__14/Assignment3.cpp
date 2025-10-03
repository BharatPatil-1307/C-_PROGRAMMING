#include<iostream>
using namespace std;

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    char ch = 'a';
    for(i = 0 ; i < iRow ; i++ )
    {
        int iCnt = 1;
        for(j = 0 , ch = 'a' ; j < iCol ; j++, ch++, iCnt++)
        {
            if(i % 2 == 0)
            {
                cout << iCnt <<"\t";
            }
            else
            {
                cout << ch <<"\t";
            }
        }
        cout <<"\n";
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    cout << "Enter the Rows :";
    cin >> iValue1;

    cout << "Enter the Colmuns :";
    cin >> iValue2;

    Pattern(iValue1 , iValue2);

    return 0;
}