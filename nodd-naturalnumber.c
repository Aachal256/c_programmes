// WAP to print the first N odd natural numbers  .....

#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n)
    {
    printf("\n%d",2*i-1);
    i++;
    }
    return 0;

}
/*
i/p=) Enter a number:5
o/p=)
1
3
5
7
9

*/