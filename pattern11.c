#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",i);
        printf("\n");
    }
    return 0;
}

/*
Enter a number: 7
o/p=) 
1
22
333
4444
55555
666666
7777777
*/