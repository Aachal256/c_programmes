//Write a function to check whether a given number is prime or not ..if number is prime then print 1 and number is not prime then print 0..[TSRS] TAKE SOMETHING AND RETURN SOMETHING.

#include<stdio.h>
int primenum(int);
int main()
{
    int s,a;
    printf("Enter a number:");
    scanf("%d",&a);
    s=primenum(a);
    printf("%d",s);
    return 0;
}
int primenum(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        break;
    }
    if(i==n)
    {
        return 1;
    }
    return 0;

}

/*
i/p=) Enter a number:11
o/p=) 1
*/