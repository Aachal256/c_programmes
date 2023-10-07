// WAP to calculate simple intrest.


#include<stdio.h>
int main()
{
    int p;
    float r,t,si;
    printf("Enter p,r,t :");
    scanf("%d%f%f",&p,&r,&t);
    si=p*r*t/100;
    printf("simple intrest %f",si);
    return 0;
}