// Write a program to Check whether a number is prime.
#include<iostream>
using namespace std;
int main()
{
    int i,num,temp=0;
    cout<<"Enter a number: ";
    cin>>num;
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            temp=1;
            break;
        }

    }
    if(temp==0)
    {
        cout<<num<<" "<<"is a prime number.";

    }
    else
    {
        cout<<num<<" "<<"is not a prime number.";
    }

}