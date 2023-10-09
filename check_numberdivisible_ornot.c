// WAP to check whether a given number is divisible by 5 or not....

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%5==0)
    {
    printf("divisible by 5");
    }
    if(x%5)
    {
    printf("not");
    }
    return 0;
}


/*

i/p=    Enter a number:55
o/p=    divisible by 5

*/