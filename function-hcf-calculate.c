//write a function to calculate HCF of two numbers.[TSRS]

#include<stdio.h>
 
int HCF(int x,int y)
{
    int a,b,H;
    printf("Enter a two numbers:");
    scanf("%d%d",&a,&b);
    for( H=a<b?a:b; H>=1; H--)
    if(a%H==0 && b%H==0)
    break;
    printf("HCF = %d",H);
    return H;
}
int HCF(int ,int);
int main()
{
    int s,x,y;
    s=HCF(x,y);
    return 0;
}

/*
i/p=)  Enter a two numbers:4 6
o/p=) HCF = 2
*/