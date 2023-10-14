// WAP to  print all prime numbers under 100

#include<stdio.h>
int main()
{
    int i,n;
    for(n=2;n<=99;n++)
    {
    for(i=2;i<=n-1;i++)
    if(n%i==0)
    break;
    if(i==n)
    printf(" %d",n);
    }
    return 0;
}

/*
o/p=)    2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 
*/