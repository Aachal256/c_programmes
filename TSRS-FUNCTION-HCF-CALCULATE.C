//write a function to calculate HCF of two numbers..[TSRS] TAKE SOMETHING AND RETURN SOMETHING

#include<stdio.h>
int hcf(int,int);
int main()
{
    int s,x=4,y=6;
    s=hcf(x,y);
    printf("HCF = %d",s);
    return 0;
}
int hcf(int a,int b)
{
    int H;
    for(H=a<b?a:b; H>=-1; H--)
    {
        if(a%H==0 && b%H==0)
        return H;
    }
}

/*
O/P=)   HCF = 2
*/