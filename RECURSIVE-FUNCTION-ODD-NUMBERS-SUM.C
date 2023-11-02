// WRITE A RECURSIVE FUNCTION TO CALCULATE SUM OF FIRST N ODD NATURAL NUMBERS..


#include<stdio.h>
int odd(int);
int main()
{
    printf("sum of first 5 odd natural numbers = %d",odd(5));
}
int odd(int n)
{
    if(n==1)
    return 1;
    return 2*n-1 + odd(n-1);
}

// o/p=))  sum of first 5 odd natural numbers = 25
