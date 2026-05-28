//Write a program to Calculate sum of first N natural no.
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"sum of first "<<n<<" natural number is: "<<sum;
    return 0;
}