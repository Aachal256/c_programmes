// WAP to check whwther a given number is a three digit number or not...

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x<999 && x>99)
    printf("three digit number");
    else
    printf("not");
    return 0;
}


/*
i/p=  Enter a number:123
o/p=  three digit number
*/