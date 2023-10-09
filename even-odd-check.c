// WAP to check whether a given number is an even number or an odd number.....

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0)
    printf("Even number");
    if(a%2==1)
    printf("odd number");
    return 0;
}

/*
i/p=    Enter a number:4
o/p=    Even number

*/