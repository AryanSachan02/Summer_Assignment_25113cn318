//Write a program to Print multiplication table of a given number
#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Multiplication table of "<<n<<" is: "<<endl;
    for(int i=1;i<=10;i++)
    {
        fact=n*i;
        cout<<n<<" x "<<i<<" = "<<fact;
        cout<<endl;
        
    }
    return 0;
}