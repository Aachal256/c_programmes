//write a recursive function to print binary of a given decimal number..
 
#include<stdio.h>
int decimaltobinary(int ); //function diclare
int main()
{
    int n=13;
    printf("\nDecimal number to binary number convert");
    printf(" \ndecimal number of 13 is =");
    decimaltobinary(n);  //function calling
    return 0;
}
int decimaltobinary(int n)  // function defination
{
    if( n>=1)
    {
        decimaltobinary(n/2);
        printf("%d ",n%2);
        
    }
}
/*
o/p=)  Decimal number to binary number convert 
       decimal number of 13 is = 1 1 0 1 
*/

 
