//write a function to calculate the factorial of a  numbers.  [TSRS] TAKE SOMETHING,RETURN SOMETHING.

#include<stdio.h>
void num(int n)
{
    int i,fact=1;
    printf("FACTORIAL OF FIVE=");
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf(" %d",fact);
    
}
void num(int);
int main()
{
    int n=5;
    num(n);
    return 0;
}

/*
o/p=)   FACTORIAL OF FIVE= 120
*/