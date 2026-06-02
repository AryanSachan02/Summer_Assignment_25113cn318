//Write a program to Check whether a number is palindrome. 
#include<iostream>
using namespace std;
int main()
{
    int num,digit,original,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    original=num;
    while(num>0)
    {
        digit=num%10;
        sum=sum*10+digit;
        num=num/10;

    }
    if(original==sum)
    {
        cout<<"The number is a palindrome.";
    }
    else
    {
        cout<<"The number is not a palindrome.";
    }
    return 0;

}