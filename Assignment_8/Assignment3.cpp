#include<iostream>
using namespace std;

int KMToMeter(int iNo)
{
    int Kilomiter = 1000;

    Kilomiter = Kilomiter * iNo;

    return Kilomiter;
}

int main()
{
    int iValue = 0, iRet = 0;
    cout << "Enter the kilometre and convert it into meter :";
    cin >> iValue;

    iRet = KMToMeter(iValue);

    cout << iValue << ": Kilomiter : "<< iRet <<" Meter" << endl;

    return 0;
}