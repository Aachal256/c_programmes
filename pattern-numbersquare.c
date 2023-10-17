/*
number square pattern print..
1234
1234
1234
1234

*/


#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter a row and column:");
    scanf("%d%d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        printf("%d",j);
    
    printf("\n");
    }
    return 0;
}

/*
i/p=) Enter a row and column:4 4

1234
1234
1234
1234

*/