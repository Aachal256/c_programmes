//write a function to  print first N odd natural numbers [TSRN]
#include<stdio.h>
int  NaturalNumber(int );
int main()
{
    int x;
    NaturalNumber(x);
    return 0;
}
int NaturalNumber(int x )
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i=i+2)
    printf(" %d",i);
     
}

/*
i/p=) Enter a number: 5

o/p=)    1 3 5 7 9
*/