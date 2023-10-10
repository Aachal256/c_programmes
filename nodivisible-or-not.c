// WAP to check whether a given number is divisible by 3 and divisible by 2....

#include<stdio.h>
int main()
{
    int no;
    printf("Enter a number:");
    scanf("%d",&no);
    if(no%3==0 && no%2==0)
    printf("Divisible by 3 and 2");
    else
    printf("Not divisible by 3 and 2");
    return 0;

}

/*
i/p=   Enter a number:6
o/p=  Divisible by 3 and 2
*/