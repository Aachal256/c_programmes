// WAP to print   a table of N..........

#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=10)
    {
    printf("\n%d * %d = %d",n,i,i*n);
    i++;
    }
    return 0;

}

/*
i/p=) Enter a number:5
o/p=) 
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
*/