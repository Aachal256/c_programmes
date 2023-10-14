// WAP to  print all prime numbers between two given numbers

#include<stdio.h>
int main()
{
    int i,x,l,u;
    printf("Enter two numbers:");
    scanf("%d%d",&l,&u);
    for( x=l;x<=u;x++)
    {
    for( i=2;i<=x-1;i++)
    if(x%i==0)
    break;
    if(i==x)
    printf(" %d",x);
    }
    return 0;
}

    
/*
i/p=)  Enter two numbers:10 20
o/p=)   11 13 17 19
*/