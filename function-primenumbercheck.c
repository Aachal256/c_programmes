//write a function to  check whether a given number is prime or not.[TSRS]

#include<stdio.h>
 
int prime(int x )
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for( i=2;i<n;i++)
    {
    if( n%i==0)
    break;
    }
    if(i==n)
    printf("Prime number");
    else
    printf("Not prime number");
    return n;
    
    
}
int prime(int );
int main()
{
    int s,x;
    s=prime(x);
    return 0;
}

/* 
i/p=) Enter a number:12
o/p=) Not prime number
*/