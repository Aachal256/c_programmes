//WAP to calculate average of three integers. numbers are given by the user.

#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter a Three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3.0;
    printf("average of three numbre is: %f",avg);
    return 0;
}