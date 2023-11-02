//write a recursive function to print first N Even natural numbers..
#include<stdio.h>
int num(int a)
{
    if(a==0)
    return 1;
    num(a-1);
    printf(" %d",2*a);
}
int main()
{
    int x=5;
    printf("first N Even natural numbers :");
    num(x);
}

/*
o/p-)    first N Even natural numbers : 2 4 6 8 10
*/