//Write a recursive function to print first N natural numbers..
#include<stdio.h>
int numPrint(int );
int main()
{
    int n=1;
    printf("First natural numbers = ");
    numPrint(n);
    return 0;
}
int numPrint(int n)
{
    if(n<=10)
    {
        printf(" %d",n);
        numPrint(n+1);
    
    }
    }

/*
o/p=)  First natural numbers =  1 2 3 4 5 6 7 8 9 10
*/