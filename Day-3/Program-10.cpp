//Write a program to Print prime numbers in a range.
#include<iostream>
using namespace std;
int main()
{

    int i,j,num1,num2,temp=0;
    cout<<"Enter a range: ";
    cin>>num1>>num2;
    cout<<"Prime numbers between "<<num1<<" and "<<num2<<" are: ";
    for(i=num1;i<=num2;i++)
    {
        temp=0;
        for(j=2;j<i/2;j++)
        {
            if(i%j==0)
            {
                temp=1;
                break;
            }

        }
        if(temp==0 && i>1)
        {
            cout<<i<<" ";

        }
    }
    return 0;
}