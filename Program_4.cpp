//Write a program to Count digits in a number.
#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0)
    {
        n=n/10;
        count++;

    }
    cout<<"Number of digits in the number is: "<<count;
    return 0;
}