// WAP to check whether a given number is divisible by 7 and divisible by 3....

#include<stdio.h>
int main()
{
    int no;
    printf("Enter a number:");
    scanf("%d",&no);
    if(no%7==0 || no%3==0)
    printf("Divisible by 7 and 3");
    else
    printf("Not divisible by 7 and 3");
    return 0;

}

/*
i/p=   Enter a number:27
o/p=  Divisible by 7 and 3
*/