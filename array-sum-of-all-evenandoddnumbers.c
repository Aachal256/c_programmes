/* WRITE A PROGRAM TO CALCULATE THE SUM OF ALL EVEN NUMBERS AND SUM OF ALL ODD NUMBERS.
WHICH ARE STORED IN AN ARRAY OF SIZE 10..TAKE ARRAY VALUES FROM THE USER      */

#include<stdio.h>
int main()
{
    int a[10],i,sumEven=0,sumOdd=0;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)

    if(a[i]%2==0)
    sumEven=sumEven+a[i];

    else
    sumOdd=sumOdd+a[i];

    printf("sumEven Numbers = %d",sumEven);
    printf("\nsumOdd Numbers=%d",sumOdd);
    return 0;
}

/*
i/p=)   Enter 10 numbers:1 2 3 4 5 6 7 8 9 10
o/p==)  sumEven Numbers = 30
        sumOdd Numbers=25
*/