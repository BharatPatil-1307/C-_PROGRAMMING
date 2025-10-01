#include<iostream>
using namespace std;

double CircleArea(float fWidth, float fheight)
{
    double Area = 0.0;
    Area = fWidth * fheight;
    return Area;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double bRet = 0.0;

    cout << "Enter the Width :";
    cin  >> fValue1;
    cout << "Enter the height :";
    cin  >> fValue2;

    bRet = CircleArea(fValue1, fValue2);

    cout <<"calculate its area :" << bRet << endl;

    return 0;
}