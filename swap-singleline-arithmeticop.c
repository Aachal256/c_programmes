// WAP to swap values of two int variables in single line arithmetic expression.

#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("before swap %d %d",a,b);
    b=a+b-(a=b);
    printf("\nAfter swap %d %d",a,b);
    return 0;
}