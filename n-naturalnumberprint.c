// WAP to print the first N natural numbers...

#include<stdio.h>
int main()
{
    int i=1,a;
    printf("Enter a number:");
    scanf("%d",&a);
    while(i<=a)
    {
    printf("\n%d",i);
    i++;
    }
    return 0;

}

/*
i/p=) Enter a number:12
o/p=)
1
2
3
4
5
6
7
8
9
10
11
12
*/