#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3=2,m,i;
    printf("Enter a number:");
    scanf("%d",&m);
    printf("%d%d",n1,n2);
    for(i=2;i<=m;i++)
    {
        n3=n1+n2;
        printf(" %d",n3);
        n1=n2;
        n2=n3;
        }
        return 0;
}

/*
i/p=) Enter a number:6
o/p=)  0 1 1 2 3 5 8
*/