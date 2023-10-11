// WAP to check in which monthes have which numbers of days.

#include<stdio.h>
int main()
{
    int m;
    printf("Enter a number:");
    scanf("%d",&m);
    if(m>=31)
    printf("jan,mar,may,uly,aug,oct,dec");

    else if(m>=30)
    printf("apr,june,sept,nov");
    
    else if(m<=27)
    printf("invalid month number");
    else
    printf("feb");

    return 0;
}

/*
i/p=  Enter a number:31            ||Enter a number:29  ||Enter a number:15
o/p=  jan,mar,may,uly,aug,oct,dec   ||feb                || invalid month number
*/