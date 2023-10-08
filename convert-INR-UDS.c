// Assume price of 1 USD is INR 84.23 . write a program to take the amount in  INR and convert it into USD.

#include<stdio.h>
int main()
{
    float INR;
    printf("Enter amount in INR:");
    scanf("%f",&INR);
    printf("convert USD = %f",INR/84.23);
    return 0;
}


/* 
i/p=    Enter amount in INR:84.23
o/p=    convert USD = 1.000000


*/