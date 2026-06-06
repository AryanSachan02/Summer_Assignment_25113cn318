//Write a program to Convert decimal to binary.
#include<iostream>
int main()
{
    int decimal,binary=0,rem=0,i=1;
    std::cout<<"Enter a decimal number: ";
    std::cin>>decimal;
    while(decimal!=0)
    {
        rem=decimal%2;
        binary=binary+rem*i;
        decimal=decimal/2;
        i=i*10;
    }
    std::cout<<"Binary number: "<<binary<<std::endl;
    return 0;

}