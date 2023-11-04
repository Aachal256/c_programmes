/* WRITE A PROGRAM TO FIND THE GREATEST NUMBER STORED IN AN ARRAY OF SIZE 10..
TAKE ARRAY VALUES FROM THE USER   */

#include<stdio.h>
int main()
{
    int a[10],i,max;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<=9;i++)

    if(max<a[i])
    max=a[i];
    printf("Greatest number = %d",max);
    return 0;
}

/*
i/p--)  Enter 10 numbers:1 2 3 4 50 6 7 8 9 10
o/p--)  Greatest number = 50
*/
