// WRITE A PROGRAM TO CALCULATE THE SUM OF TWO MATRIX EACH OF ORDERR 3 X 3

#include<stdio.h>
void f1()
{
    int A[3] [3],B[3] [3], C[3] [3],i,j;
    printf("Enter 9 numbers of first matrix:");
    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    scanf("%d",&A[i][j]);

    printf("Enter 9 numbers of second matrix:");
    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    scanf("%d",&B[i][j]);

    for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    C[i] [j]=A[i][j]+B[i][j];

    printf(" sum f matrix :");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        printf(" %d",C[i][j]);
        printf("\n");

    }
}
int main()
{
    f1();
    return 0;
}

/*
I/P--  Enter 9 numbers of first matrix: 2 2 2 2 2 2 2 2 2 
Enter 9 numbers of second matrix:3 3 3 3 3 3 3 3 3

OUTPUT =   sum f matrix : 5 5 5
                          5 5 5
                          5 5 5
 
 

*/

