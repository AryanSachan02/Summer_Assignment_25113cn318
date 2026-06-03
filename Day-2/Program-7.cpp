//Write a program to Find product of digits.
#include<iostream>
using namespace std;
int main()
{
    int num,digit,prod=1;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0)
    {
        digit=num%10;
        prod=prod*digit;
        num=num/10;
    }
    cout<<"Product of digits is: "<<prod;
    return 0;
}