//write a recursive function to print first N even natural numbers..


#include<stdio.h>
int evennum(int ); //function diclare
int main()
{
    int n=5;
    printf("\nfirst N Even natural numbers =");
    evennum(n);  //function calling
    return 0;
}
int evennum(int n)  // function defination and you can diclare variable a and any other.
{
    if( n>=1)
    {
        evennum(n-1);
        printf(" %d",2*n);
    }
}

/*
o/p=)  first N Even natural numbers = 2 4 6 8 10
*/