// WAP to make the last digit of a number stored in a variable as zero.
//Eg. - if x=2345 then make it x=2340.

#include<stdio.h>
int main()
{
    int x,k;
    printf("Enter a number:");
    scanf("%d",&x);
    k=x/10*10;
    printf("last digit of a n0. stored in a variable as zero %d",k);
    return 0;
}