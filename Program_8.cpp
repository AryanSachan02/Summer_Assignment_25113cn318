//Write a program to Check whether a number is palindrome.
#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,digit,temp;
    cout<<"Enter a number: ";
    cin>>num;
    temp=num;
    while(num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(temp==rev)
    cout<<"The number is Palindrome.";
    else
    cout<<"The number is not Palindrome,";
    return 0;

}