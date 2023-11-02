//write a recursive function to print first N natural numbers in reverse numbers..

#include<stdio.h>
int num(int a)
{
    if(a==0)
    return 1;
    printf(" %d",a);
    num(a-1);
}
int main()
{
    int x=10;
    printf("first N natural numbers in reverse order:");
    num(x);
}

/*
o/p-)   first N natural numbers in reverse order: 10 9 8 7 6 5 4 3 2 1
*/