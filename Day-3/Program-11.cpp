//Write a program to Find GCD of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,temp1,temp2;
    cout<<"Enter first number numbers: ";
    cin>>num1;
    cout<<"Enter second number numbers: ";
    cin>>num2;
    temp1=num1;
    temp2=num2;
    while(temp1!=temp2)
    {
        if(temp1>temp2)
        {
            temp1=temp1-temp2;
        }
        else
        {
            temp2=temp2-temp1;
        }
        
    }
    cout<<"GCD of "<<num1<<" and "<<num2<<" is: "<<temp1;
    return 0;
}