#include<iostream>
using namespace std;

template <class T>
int Multiply(T iNo1 , T iNo2)
{
    T ans;
    ans = iNo1 * iNo2;
    return ans;
}
int main()
{
    int iRet = Multiply(10 , 20);
    cout << iRet <<endl;
    float bRet = Multiply(10.0f, 20.0f);
    cout << bRet <<endl;
    return 0;
}