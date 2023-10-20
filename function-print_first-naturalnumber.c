//write a function to  print first N natural numbers [TSRN]
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
    for(i=1;i<=n;i++)
    printf(" %d",i);
     
}

/*
i/p=) Enter a number: 8

o/p=)  1 2 3 4 5 6 7 8
*/