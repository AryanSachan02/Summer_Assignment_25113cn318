//Write a program to printArmstrong number in range.
#include<iostream>
using namespace std;
int main(){
    int rem,sum=0,temp,num1,num2;
    cout<<"Enter the range: ";
    cin>>num1>>num2;
    cout<<"Armstrong numbers in the range "<<num1<<" to "<<num2<<" are: ";
    for(int i=num1;i<=num2;i++)
    {
        temp=i;
        sum=0;
        while(temp!=0)
        {
            rem=temp%10;
            sum+=rem*rem*rem;
            temp/=10;
        }
        if(sum==i)
        cout<<i<<" ";
    }
    return 0;
}