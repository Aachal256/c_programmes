// WAP to find the area of the circle.take redius of circle from user as input.

#include<stdio.h>
int main()
{
    int r;
    float a;
    printf("Enter a radius of circle :");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of the circle is %f",a);
    return 0;
}