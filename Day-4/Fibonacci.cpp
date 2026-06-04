//Write a program to generate Fibonacci series.
#include<iostream>
using namespace std;
int main()
{
    int n,num1=0,num2=1,next;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    for(int i=0;i<n;i++)
    {
        if(i<=1)
        next=i;
        else{
            next=num1+num2;
            num1=num2;
            num2=next;
        }
        cout<<next<<" ";
    }
    return 0;
}