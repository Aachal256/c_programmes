// WAP to swap values of two int variables.

#include<stdio.h>
int main()
{
    int a=10,b=20,c;
    printf("\nBefore swap %d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swap %d %d",a,b);
    return 0;
}