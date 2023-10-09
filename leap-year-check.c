// WAP to check whether a given year is a leap year or not....

#include<stdio.h>
int main()
{
    int y;
    printf("Enter a year:");
    scanf("%d",y);
    if(y%100==0)
    {
        if(y%400==0)
        printf("leap year");
        else
        printf("non leap year");

    }
    else
    {
        if(y%4==0)
        printf("leap year");
        else
        printf("non leap yaer");

    }
    return 0;

}

/*
i/p=    Enter a year:1900
o/p=    leap year

*/