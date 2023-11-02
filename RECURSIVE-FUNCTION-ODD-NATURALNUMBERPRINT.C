//write a recursive function to print first N odd natural numbers..
#include<stdio.h>
int num(int a)
{
    if(a==0)
    return 1;
    num(a-1);
    printf(" %d",2*a-1);
     
}
int main()
{
    int x=5;
    printf("first N Odd natural numbers :");
    num(x);
}

/*
o/p-)   first N Odd natural numbers : 1 3 5 7 9
*/