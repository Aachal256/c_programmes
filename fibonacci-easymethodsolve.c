//fibonacci series print

#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(a=-1,b=1;n;n--)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
        }
        return 0;
}

/*
i/p=) Enter a number :8
o/p=)  0 1 1 2 3 5 8 13
*/