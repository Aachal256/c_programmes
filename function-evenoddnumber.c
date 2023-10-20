//write a function to check whether a given number is even or odd . return 1 if the number is even. otherwise return 0.[TSRS]
#include<stdio.h>
int evenodd(int );
int main()
{
    int s,x;
    s=evenodd(x);
    return 0;
}
int evenodd(int x )
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0)
    printf("%d",1);
    else
    printf("%d",0);
    return n;
}

/*
i/p=) Enter a number: 6

o/p=)  1
*/