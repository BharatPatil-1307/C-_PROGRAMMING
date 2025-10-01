#include <iostream>
using namespace std;

double SquareMeter(int No)
{
    const double SquareFeetToSquareMeter = 0.0929;
    return SquareFeetToSquareMeter * No;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    cout << "Enter the area in Square Feet: ";
    cin >> iValue;

    dRet = SquareMeter(iValue);

    cout << "Area in Square Meters: " << dRet << " m²" << endl;

    return 0;
}
