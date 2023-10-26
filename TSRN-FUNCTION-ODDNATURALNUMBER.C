// write a function to print N odd natural number [TSRN] TAKE SOMETHING,RETURN NOTHING

#include<stdio.h>
void print(int);
int main()
{
    int n=5;
    printf("First N odd natural number =");
    print(n);
     
    return 0;
}
void print(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf(" %d",2*i-1);
}

/*
o/p=)  First N odd natural number = 1 3 5 7 9
*/