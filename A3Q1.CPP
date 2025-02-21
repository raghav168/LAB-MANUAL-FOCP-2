//Write a function int maxnumber(int a,int b) that takes two integers as parameters and returns the larger one.
#include <iostream>
using namespace std;
int maxNumber(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a,b;
    cout<<"enter numbers: ";
    cin>>a>>b;
    cout<<maxNumber(a,b)<<" is larger";
    return 0;
}