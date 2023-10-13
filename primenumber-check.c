// WAP to  check whether a given number is a prime number or not...

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%2==0)
        break;
    }
    if(i==n)
    printf("prime");
    else
    printf("Not prime");
    return 0;
}

/*  
i/p=)   Enter a number:101
o/p=)   prime

*/