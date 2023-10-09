// WAP to check whether the given number is even or odd using a bitwise operator...

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x&1)
    printf("odd number");
    else
    printf("even number");
    return 0;
}


/*
i/p=     Enter a number:4
o/p=     even number
*/