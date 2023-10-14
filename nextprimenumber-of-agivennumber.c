// WAP to find next prime number of a given number..

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter two numbers:");
    scanf("%d",&n);
    for( n++; ; n++)
    {
    for( i=2;i<=n-1;i++)
    if(n%i==0)
    break;
    if(i==n)
    {
    printf(" %d",n);
    break;
    }
    }
    return 0;

}

/*
i/p=)   Enter two numbers:3
o/p=)   5
*/