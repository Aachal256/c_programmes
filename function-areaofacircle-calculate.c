// write a function to calculate the area of a circle:: [TSRS] TAKE SOMETHING AND RETURN SOMETHING

#include<stdio.h>
int add(int);
int main()
{
    int s,a;
    s=add(a);
    return 0;
}
int add(int x)
{
    int r;
    float a;
    printf("Enter  a number : ");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("area of circle = %.2f",a);
    return a;
}

/*
I/P=) Enter  a number : 8
O/P=) area of circle = 200.96
*/