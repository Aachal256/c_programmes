// WAP to print the first  squares of the first N natural numbers...

#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n)
    {
    printf("\n%d",i*i);
    i++;
    }
    return 0;

}

/*
i/p=)  Enter a number:6
o/p=)
1
4
9
16
25
36

*/