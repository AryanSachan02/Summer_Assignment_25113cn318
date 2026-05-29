//Write a program to Find product of digits.
#include<iostream>
using namespace std;
int main()
{
    int prod=1,num,digit;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0)
    {
        digit=num%10;
        prod=prod*digit;
        num=num/10;

    }
    cout<<"Product of digits: "<<prod;
    return 0;
}