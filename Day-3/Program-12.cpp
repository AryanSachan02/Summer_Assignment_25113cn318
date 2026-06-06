//Write a program to Find LCM of two numbers.
#include<iostream>
int main()
{
    int num1,num2,temp1,temp2,gcd,lcm;
    std::cout<<"Enter first number numbers: ";
    std::cin>>num1;
    std::cout<<"Enter second number numbers: ";
    std::cin>>num2;
    temp1=num1;
    temp2=num2;
    while(temp1!=temp2)
    {
        if(temp1>temp2)
        {
            temp1=temp1-temp2;
        }
        else
        {
            temp2=temp2-temp1;
        }

        
    }
    gcd=temp1;
     lcm=(num1*num2)/gcd;
    std::cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<lcm;
    return 0;

}