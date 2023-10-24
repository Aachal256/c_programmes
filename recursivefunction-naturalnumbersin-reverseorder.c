//write a recursive function to print first N natural numbers in reverse order..

#include<stdio.h>
int num(int); //function diclare
int main()
{
    int n=10;
    printf("\nfirst N natural numbers in reverse order=");
    num(n);  //function calling
    return 0;
}
int num(int n)  // function defination
{
    if(n>=1)
    {
        printf(" %d",n);
        num(n-1);
    }
}

/*
o/p=)  first N natural numbers in reverse order = 10 9 8 7 6 5 4 3 2 1
*/


