#include<iostream>
using namespace std;

template <class T>
T Samll(T No1, T No2, T No3)
{
    T SamllValue = No1;

    if (No2 < SamllValue)
    {
        SamllValue = No2;
    }
    if (No3 < SamllValue)
    {
        SamllValue = No3;
    }

    return SamllValue;
}

int main()
{
    int iRet = Samll(10, 20, 15);
    cout << "Largest of integers: " << iRet << "\n";

    float fRet = Samll(11.5f, 20.1f, 15.3f);
    cout << "Largest of floats: " << fRet << "\n";

    double dRet = Samll(12.25, 5.75, 18.5);
    cout << "Largest of doubles: " << dRet << "\n";

    return 0;
}