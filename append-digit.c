// WAP to input a number from the user and also input a digit. append a digit in the number and pint the resulting number.
//(Eg. -number=234 and digit=9 then the resulting number is 2349)

#include<stdio.h>
int main()
{
    int no,digit,k;
    printf("Enter a number and digit:");
    scanf("%d%d",&no,&digit);
    k=no * 10 + digit;
    printf("append digit in last %d",k);
    return 0;
}


/* 

i/p=   Enter a number and digit:234
9
o/p=   append digit in last 2349




*/