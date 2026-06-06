//Write a program to Find x^n without pow().
#include<iostream>
int main(){
    double x,result=1;
    int n;
    std::cout<<"Enter a number: ";
    std::cin>>x;
    std::cout<<"Enter the power: ";
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        result=result*x;
    }
    std::cout<<x<<"^"<<n<<" = "<<result<<std::endl;
    return 0;
}