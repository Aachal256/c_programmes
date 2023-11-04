/* WRITE A PROGRAM TO FIND THE SMALLEST NUMBER STORED IN AN ARRAY OF SIZE 10..
TAKE ARRAY VALUES FROM THE USER   */

#include<stdio.h>
int main()
{
    int a[10],i,min;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<=9;i++)

    if(min>a[i])
    min=a[i];
    printf("smallest number = %d",min);
    return 0;
}

/*
i/p--)   Enter 10 numbers:11 22 33 44 55 66 77 88 99 100
o/p--)   smallest number = 11
*/
