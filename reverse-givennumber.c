// WAP to reverse a given number...

#include<stdio.h>
int main()
{
    int n,r=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n)
    {
        r=r*10+n%10;
        n/=10;
    }
    printf("Reverse number is: %d",r);
    return 0;
}

/*
i/p=)  Enter a number:836
o/p=)  Reverse number is: 638
*/