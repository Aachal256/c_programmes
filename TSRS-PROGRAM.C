/* Write a program in C to show the simple structure of a function.
Expected Output :

The total is :  
*/

#include<stdio.h>
int add(int ,int );
int main()
{
    int s,x,y;
    printf("Enter two numbers :");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("The total is : %d",s);
    return  0;
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

/*
o/p+)  Enter two numbers:10 1
        The total is : 11
*/