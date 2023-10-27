//write a function to calculate simple interest.[TSRS]TAKE SOMETHING,RETURN SOMETHING

#include<stdio.h>
float simpleInterest(int,float,float);
int main()
{
    float s,p=1000,r=2,t=6.6;
    s= simpleInterest(p,r,t);
    printf("simple interest = %.2f",s);
    return 0;
}
float simpleInterest(int p,float r,float t)
{
    return p*r*t/100;
}

/*
o/p=)  simple interest = 132.00
*/