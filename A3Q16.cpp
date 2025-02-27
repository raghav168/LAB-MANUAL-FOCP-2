/*Write a function int findLargest(int count,....) that takes a avariable number of integer arguments and
returns the largest number among them. The first argument count will specify how many numbers are passed.*/
#include<iostream>
#include<cstdarg>
using namespace std;
int findLargest(int count,...)
{
    va_list args;
    va_start(args,count);
    int largest=0;
    for(int i=0;i<count;i++)
    {
        int temp=va_arg(args,int);
        if(temp>largest)
        {
            largest=temp;
        }
    }
    va_end(args);
    return largest;
}
int main()
{
    cout<<"Largest number among 3,5,7,9,11 is: "<<findLargest(5,3,5,7,9,11)<<endl;
    cout<<"Largest number among 10,20,30,40,50 is: "<<findLargest(5,10,20,30,40,50)<<endl;
    return 0;
}