// WRITE A RECURSIVE FUNCTION TO CALCULATE SUM OF FIRST N EVEN NATURAL NUMBERS..


#include<stdio.h>
int EvenNum(int);
int main()
{
    printf("sum of first 4 Even natural numbers = %d",EvenNum(4));
}
int EvenNum(int n)
{
    if(n==1)
    return 2;
    return 2*n + EvenNum(n-1);
}

// o/p=))   sum of first 4 Even natural numbers = 6
