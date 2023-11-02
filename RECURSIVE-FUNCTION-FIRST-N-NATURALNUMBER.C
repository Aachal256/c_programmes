//write a recursive function to print first N natural numbers.

#include<stdio.h>
int num(int a)
{
    if(a==0)
    return 1;
    num(a-1);
    printf(" %d",a);
}
int main()
{
    int x=10;
    printf("first N natural numbers:");
    num(x);
}

/*
o/p-)  first N natural numbers: 1 2 3 4 5 6 7 8 9 10
*/