// WAP to calculate LCM of two numbers....

#include<stdio.h>
int main()
{
    int a,b,l;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(l=a>b?a:b ; l=a*b ; l++)
    {
        if(l%a==0 && l%b==0)
    
    printf("lcm %d",l);
    
    return 0;
}
}
/*
i/p=)  Enter two numbers:4 5

o/p=)   lcm 20
*/