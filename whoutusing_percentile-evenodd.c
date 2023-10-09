// WAP to check whether a given number is an even number or an odd number without using % operater...

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x/2*2==x)
    printf("Even number");
    else
    printf("odd");
    return 0;
}

/*
i/p=   Enter a number:4
o/p=   Even number

*/