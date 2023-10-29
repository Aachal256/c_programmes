//write a function to calculate LCM of two numbers..[TSRS] TAKE SOMETHING AND RETURN SOMETHING

#include<stdio.h>
int lcm(int,int);
int main()
{
    int s,x=3,y=4;
    s=lcm(x,y);
    printf("Lcm = %d",s);
    return 0;
}
int lcm(int a,int b)
{
    int L;
    for(L=a>b?a:b; L=a*b; L++)
    {
        if(L%a==0 && L%b==0)
        return L;
    }
}

/*
O/P=)  Lcm = 12
*/