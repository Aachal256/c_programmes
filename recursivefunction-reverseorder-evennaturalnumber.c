//write a recursive function to print first N even natural numbers in reverse order..


#include<stdio.h>
int evennum(int ); //function diclare
int main()
{
    int n=5;
    printf("\nfirst N Even natural numbers in reverse order =");
    evennum(n);  //function calling
    return 0;
}
int evennum(int n)  // function defination and you can diclare variable a and any other.
{
    if( n>=1)
    {
         
        printf(" %d",2*n);
        evennum(n-1);
    }
}

/*
o/p=)    first N Even natural numbers in reverse order = 10 8 6 4 2
*/