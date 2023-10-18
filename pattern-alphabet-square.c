/*
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
*/

#include<stdio.h>
int main()
{
    int n,i,j;
    char k;
    printf("Enter a row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k='A';
        for(j=1;j<=n;j++)
        printf(" %c",k++);
    
    printf("\n");
    }
    return 0;
    }

/*
i/p=) Enter a row: 7
o/p=)
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
 A B C D E F G
*/
