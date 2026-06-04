//Write a program to find nth Fibonacci term.
#include<iostream>
using namespace std;
int main()
{
    int n,num1,num2,next;
    cout<<"Enter the term number: ";
    cin>>n;
    num1=0;
    num2=1;
    if(n==1)
    cout<<"The "<<n<<"st term of Fibonacci series is: "<<num1;
    else if(n==2)
    cout<<"The "<<n<<"nd term of Fibonacci series is: "<<num2;
    else
    {
        for(int i=3;i<=n;i++)
        {
            next=num1+num2;
            num1=num2;
            num2=next;
        }
        cout<<"The "<<n<<"th term of Fibonacci series is: "<<next;
    }
    return 0;
}