// WAP to calculate sum of first N natural numbers...

#include<stdio.h>
int main()
{
    int n,s=0,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    
        s=s+i;
        printf("%d",s);

    
    return 0;
}

/*
i/p=)  Enter a number:5
o/p=)  15
*/