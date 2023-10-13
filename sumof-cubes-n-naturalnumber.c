// WAP to calculate sum of cubes of first N  natural numbers....

#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s*1+i*i*i;
    printf("%d",s);
    return 0;
}

/*
i/p=)  Enter a number:4
o/p=)  100
*/