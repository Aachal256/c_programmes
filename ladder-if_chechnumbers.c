// WAP to check whether a given number is positive or non positive or zero.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>0)
    printf("positive number");
    else if(a<0)
    printf("negative number");
    else
    printf("zero");
    return 0;
}

/*

i/p=  Enter a number:12   ||Enter a number:-87 ||Enter a number:0
o/p=  positive number      ||negative number    ||zero

*/