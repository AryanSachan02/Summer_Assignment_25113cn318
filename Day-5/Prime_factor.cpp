//Write a program to Find largest prime factor.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int largest=0;
    for(int i=2;i<=n;i++)
    {
        while(n%i==0)
        {
          largest=i;
            n/=i;
        }
    }
    cout<<"Largest prime factor is: "<<largest<<endl;
    return 0;
}