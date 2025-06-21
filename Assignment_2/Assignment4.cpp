#include<iostream>
using namespace std;

void Display(int iNo1, int iFreq)
{
    int iCnt = 0;

    cout<<"OutPut :";
    for(iCnt = 1; iCnt <= iFreq; iCnt++)
    {
        cout<<iNo1;
    }
    cout<<"\n";


}

int main()
{
    int iValue1 = 0;
    int iCount = 0;

    cout<<"Enter The Number :";
    cin>>iValue1;

    cout<<"Enter The Frequency :";
    cin>>iCount;

    Display(iValue1, iCount);

    return 0;
}