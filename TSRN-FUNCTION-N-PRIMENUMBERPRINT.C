//WRITE A FUNCTION TO PRINT FIRST N PRIME NUMBERS[TSRN] TAKE SOMETHING,RETURN NOTHING.

#include<stdio.h>
void prime(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    prime(x);
    return 0;
}
void prime (int n)
{
    int i,x;
    for(n=2;n<=10;n++)
    {
        for(i=2;i<=n;i++)
        if(n%i==0)
        break;
    if(i==n)
    {
    printf(" %d",n);
    }
    }
}
    
/*
i/p=)  Enter a number:10
o/p-)   2 3 5 7
*/