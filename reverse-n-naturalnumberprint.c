// WAP to print the first N natural numbers in reverse order....

#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>=1)
    {
    printf("\n%d",n);
    n--;
    }
    return 0;

}

/*
i/p=)  Enter a number:8
o/p=)
8
7
6
5
4
3
2
1


*/