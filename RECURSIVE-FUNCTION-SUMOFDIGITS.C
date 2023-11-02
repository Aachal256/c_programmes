// WRITE A RECURSIVE FUNCTION TO CALCULATE SUM O DIGITS OF A GIVEN NUMBER..

#include<stdio.h>
int sumofDigit(int);
int main()
{
    printf("sum of Digits = %d", sumofDigit(421));
}
int sumofDigit(int n)
{
    if(n==0)
    return 0;
    return  sumofDigit(n/10)+n%10;
}

// o/p=))    sum of Digits = 7
