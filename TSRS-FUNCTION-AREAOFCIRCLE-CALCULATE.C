//write a function to calculate the area of a circle..[TSRS]TAKE SOMETHING,RETURN SOMETHING

#include<stdio.h>
float areaOfcircle(int);
int main()
{
    float s,r=8;
    s=areaOfcircle(r);
    printf("area is = %.2f",s);
    return 0;
}
float areaOfcircle(int r)
{
    return  3.14*r*r;
}