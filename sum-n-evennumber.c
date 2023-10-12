// WAP to calculate sum of first N even natural numbers....

#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+2*i;
    printf("%d",s);
    return 0;
}

/*
i/p=) Enter a number:4
o/p=) 20

*/