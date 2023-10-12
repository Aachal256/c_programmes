// WAP to print the first N  even natural numbers in reverse order ...

#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>=i)
    {
    printf("\n%d",2+2*n-2);
    n--;
    }
    return 0;

}

/*
i/p=) Enter a number:5
o/p=)
10
8
6
4
2

*/