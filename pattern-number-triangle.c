/*
NUMBER TRIANGLE 
I/P=)  Enter a row :8

 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
 1 2 3 4 5 6
 1 2 3 4 5 6 7
 1 2 3 4 5 6 7 8

*/

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a row :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf(" %d",j);
    
    printf("\n");
    }
    return 0;
}