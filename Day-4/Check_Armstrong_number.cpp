//Write a program to check Armstrong number.
#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0,temp;
    cout<<"Enter a number: ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum+=rem*rem*rem;
        temp/=10;
    }
    if(sum==num)
    cout<<num<<" is an Armstrong number.";
    else
    cout<<num<<" is not an Armstrong number.";
    return 0;
}