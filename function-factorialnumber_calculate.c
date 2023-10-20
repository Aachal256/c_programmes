//write a function to  calculate the factorial of a number [TSRS]..
#include<stdio.h>
int factorial(int );
int main()
{
    int s,x;
    s=factorial(x);
    return 0;
}
int factorial(int x)
{
    int n,i,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("factorial is = %d",fact);
    return fact;
     
}

/*
i/p=) Enter a number: 5

o/p=)    120
*/