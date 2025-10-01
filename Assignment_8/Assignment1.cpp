#include<iostream>
using namespace std;

double CircleArea(float fRadius)
{
    float fPI = 3.14;
    double Area = 0.0;
    Area = fPI * fRadius * fRadius;
    return Area;
}

int main()
{
    float fValue = 0.0;
    double bRet = 0.0;
    cout << "Enter the Number :";
    cin >> fValue;
    bRet = CircleArea(fValue);

    cout <<"Area of Circle is :" << bRet << endl;

    return 0;
}