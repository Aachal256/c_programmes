
#include<stdio.h>
int num(int ); //function diclare
int main()
{
    int n=8;
    printf("\nsquares of first N natural numbers =");
    num(n);  //function calling
    return 0;
}
int num(int n)  // function defination
{
    if( n>=1)
    {
        num(n-1); // declare above bcoz of squares of FIRST N natural number.
        printf(" %d",n*n);
    }
}

/*
o/p=)  squares of first N natural numbers = 1 4 9 16 25 36 49 64
*/