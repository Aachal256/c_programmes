// WRITE A PROGRAM TO CALCULATE THE SUM OF NUMBERS STORED IN AN ARRAY OF SIZE 10. TAKE ARRAY VALUES FROM THE USER..

#include<stdio.h>
int main()
{
    int a[10],i,s;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0,s=0;i<=9;i++)
    s=s+a[i];
    printf("Sum = %d",s);
    return 0;
}

/*
I/P--) Enter 10 numberS : 1 2 3 4 5 6 7 8 9 10
O/P--) Sum = 55
*/