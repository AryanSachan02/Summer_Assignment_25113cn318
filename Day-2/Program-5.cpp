// Write a program to Find sum of digits of a number.
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,digit;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    cout<<"Sum of digits is: "<<sum;
    return 0;
}