/*
 A
 A B
 A B C
 A B C D
 A B C D E
 A B C D E F
*/

#include<stdio.h>
int main()
{
    int i,j,n;
    char k;
    printf("Enter a row :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k='A';
        for(j=1;j<=i;j++)
        printf(" %c",k++);
    
    printf("\n");
    }
    return 0;
}
/* 
i/p=) Enter a row : 6
o/p=)
 A
 A B
 A B C
 A B C D
 A B C D E
 A B C D E F
*/