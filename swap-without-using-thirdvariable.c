// WAP to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("Before swap %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swap %d %d ",a,b);
    return 0;
}