#include<stdio.h>
int main()
{
    int a,b,H;
    printf("Enter a two number:");
    scanf("%d%d",&a,&b);
    for(H=a<b ? a:b; H>=1; H--)
    if(a%H==0 && b%H==0)
    break;
    printf("HCF= %d",H);
    return 0;
}

/*
i/p=)  Enter a two number:4 6
o/p=)  HCF= 2
*/