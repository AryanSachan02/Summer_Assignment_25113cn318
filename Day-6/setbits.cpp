//Write a program to Count set bits in a number.
#include<iostream>
int main()
{
    int num,count=0;
    std::cout<<"Enter a number: ";
    std::cin>>num;
    while(num)
    {
        count+=num&1;
        num=num>>1;
    }
    std::cout<<"Number of set bits: "<<count<<std::endl;
    return 0;
}