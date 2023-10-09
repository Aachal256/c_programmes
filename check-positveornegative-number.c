// WAP to check whether a given number is positive or non positive.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
    printf("positive number");
    if(a<=0)
    printf("negative number");
    return 0;
}