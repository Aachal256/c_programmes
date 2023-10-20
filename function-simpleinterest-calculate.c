//write a function to calculate simple interest
#include<stdio.h>
int interest (int,int,int);
int main()
{
    int s,x,y,z;
    s=interest(x,y,z);
    return 0;
}
int interest (int x,int y,int z)
{
    int p;
    float si,r,t;
    printf("Enter  a  principel,rate,time : ");
    scanf("%d%f%f",&p,&r,&t);
    si=p*r*t/100;
    printf("simple intrest = %.2f",si); // after decimal only 2 digit show
    return si;
}

/*
i/p=) Enter  a  principel,rate,time : 1200 2.3  2.5
o/p=)  simple intrest = 69.00
*/