//write a function to calculate LCM of two numbers.[TSRS]

#include<stdio.h>
int lcm(int ,int);
int main()
{
    int s,x,y;
    s=lcm(x,y);
    return 0;
}
int lcm(int x,int y)
{
    int a,b,L;
    printf("Enter a two numbers:");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b ; L=a*b;L++)
    if(L%a==0 && L%b==0)
    break;
    printf("LCM = %d",L);
    return L;
}

/*
i/p=)  Enter a two numbers:3 6
o/p=)  LCM = 18
*/