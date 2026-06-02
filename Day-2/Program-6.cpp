//Write a program to Reverse a number. 
#include<iostream>
using namespace std;
int main()
{
    int num,digit,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0)
    {
        digit=num%10;
        sum=sum*10+digit;
        num=num/10;

    }
    cout<<"Reverse of the number is: "<<sum;
    return 0;

}