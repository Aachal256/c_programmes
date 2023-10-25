//write a recursive function to print reverse of a given number..
 
#include<stdio.h>
int  reverseNum(int); //function diclare
int main()
{
    int n=573;
   
    printf("\n Reverse number is =");
    reverseNum(n);  //function calling
    return 0;
}
int reverseNum(int n)  // function defination
{
    if( n)
    {
        printf("%d",n%10);
        reverseNum(n/10);
        
    }
}
/*
o/p=)   Reverse number is = 3 7 5 
*/

 
