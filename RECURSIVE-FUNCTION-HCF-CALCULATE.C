// WRITE A RECURSIVE FUNCTION TO CALCULATE HCF OF TWO NUMBERS..
#include<stdio.h>
int hcf(int,int);
int main()
{
    printf("HCF = %d",hcf(4,6));
}
int hcf(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
        return b;
        else
        return hcf(a%b,b);
    }
    else
    {
        if(b%a==0)
        return a;
        else
        return hcf(a,b%a);
    }
}

/*
O/P-)  HCF = 2
*/