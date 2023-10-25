//write a recursive function to print first N odd natural numbers..


#include<stdio.h>
int num(int ); //function diclare
int main()
{
    int n=4;
    printf("\nfirst N odd natural numbers =");
    num(n);  //function calling
    return 0;
}
int num(int n)  // function defination and you can diclare variable a and any other.
{
    if( n>=1)
    {
        num(n-1);
        printf(" %d",2*n-1);
    }
}

/*
o/p=)    first N odd natural numbers = 1 3 5 7
*/