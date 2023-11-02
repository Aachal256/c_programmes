//write a recursive function to print  reverse of a given number..
#include<stdio.h>
int num(int a)
{
    if(a>=1)
    printf("%d",a%10);
    num(a/10);
}
int main()
{
    int x=256;
    printf("  REVERSE NUMBER :");
    num(x);
}

/*
o/p-)       REVERSE NUMBER :652
*/