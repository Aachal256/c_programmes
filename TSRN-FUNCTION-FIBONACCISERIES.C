// write a function to print N terms of fibonacci series[TSRN] TAKE SOMETHING,RETURN NOTHING
#include<stdio.h>
void fibo(int x);
int main()
{
    int x=8;
    printf("first N terms of fibonacci series:");
    fibo(x);
    return 0;
}
void fibo(int n)
{
    int a,b,c;
    for(a=-1,b=1;n;n--)
    {
        c=a+b;
        printf(" %d",c);
    a=b;
    b=c;
    }
}
 
 /*
 o/p-) first N terms of fibonacci series: 0 1 1 2 3 5 8 13
 */