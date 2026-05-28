//Write a program to Print multiplication table of a given number.
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Multiplication table of "<<n<<":\n";
    for(i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<"\n";
    }
    return 0;
}