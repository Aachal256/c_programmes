// WAP to print the first N odd natural numbers in reverse order .....

#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>=i)
    {
    printf("\n%d",2 *n-1);
    n--;
    }
    return 0;

}

/*
i/p=)
Enter a number:5
o/p=)
9
7
5
3
1
*/