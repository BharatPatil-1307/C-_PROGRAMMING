#include<iostream>
using namespace std;

double FHtoCs(float fTemp)
{
    float celsius = 0.0;

    celsius = ((fTemp - 32) * (5.0/9.0));

    return celsius;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    cout <<"Enter Temperature in Fahrenheit :";
    cin >> fValue;

    dRet = FHtoCs(fValue);

    cout <<"OUTPUT :" << dRet << endl;

    return 0;
}