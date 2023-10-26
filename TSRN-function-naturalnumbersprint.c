// write a function to print N natural number [TSRN] TAKE SOMETHING,RETURN NOTHING

#include<stdio.h>
void print(int);
int main()
{
    int n=5;
    printf("First N five natural number =");
    print(n);
     
    return 0;
}
void print(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf(" %d",i);
}

/*
o/p=)  First N five natural number = 1 2 3 4 5
*/