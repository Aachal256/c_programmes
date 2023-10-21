//wap to sum digit number using while loop.

#include<stdio.h>
int main()
{
    int n,a=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n)
    {
        a=a+n%10;
        n=n/10;

    }
    printf("sum digit =%d",a);
    return 0;
}

/*
i/p=) Enter a number: 231
o/p=) sum digit =6
*/