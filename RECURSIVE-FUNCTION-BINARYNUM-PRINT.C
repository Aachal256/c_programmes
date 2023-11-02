//write a recursive function to print binary of a given decimal number..
#include<stdio.h>
int num(int a)
{
    if(a>=1)
    num(a/2);
    printf("%d",a%2);
}
int main()
{
    int x=25;
    printf(" Binary number:");
    num(x);
}

/*
o/p-)     Binary number: 011001
*/