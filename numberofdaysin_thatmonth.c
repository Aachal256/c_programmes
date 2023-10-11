// WAP which takes the month number as an input and display number of days in that month...

#include<stdio.h>
int main()
{
    int m;
    printf("Enter a month number");
    scanf("%d",&m);
    if(m<1 && m>12)
    printf("invalid month number");
    else if(m==2)
    printf("28 or 29 days");
    else if(m==4 || m==6 || m==9 || m==11)
    printf("30 days");
    else
    printf("31 days");
    return 0;
}

/*
i/p=   Enter a month number :5   ||Enter a month number1
o/p=   30 days                     ||31 days
*/