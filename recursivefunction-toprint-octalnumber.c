//write a recursive function to print Octal of a given decimal number..
 
#include<stdio.h>
int  decimaltoOctal(int ); //function diclare
int main()
{
    int n=16;
    printf("\nDecimal number to Octal number convert");
    printf(" \nOctal number of 16 is =");
    decimaltoOctal(n);  //function calling
    return 0;
}
int decimaltoOctal(int n)  // function defination
{
    if(n>=1)
    {
        decimaltoOctal(n/8);
        printf("%d",n%8);
        
    }
}
/*
o/p=)   Decimal number to Octal number convert 
        Octal number of 16 is = 20
*/

 
