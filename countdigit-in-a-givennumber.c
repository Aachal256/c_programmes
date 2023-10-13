// WAP to count digits in a given  number..

#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        n=n/10;
        count++;
    }
    printf("\ncount digit is %d",count);
    return 0;
}

/*
i/p=)   Enter a number:8756

o/p=)   count digit is 4
*/