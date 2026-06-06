//Write a program to Convert binary to decimal.
#include<iostream>
#include<cmath>
int main()
{
    int binary;
    int decimal=0,i=0,rem;
    std::cout<<"Enter a binary number: ";
    std::cin>>binary;
    while(binary!=0)
    {
        rem=binary%10;
        decimal=decimal+rem*pow(2,i);
        binary=binary/10;
        i++;
    }
    std::cout<<"Decimal number: "<<decimal<<std::endl;
    return 0;
}