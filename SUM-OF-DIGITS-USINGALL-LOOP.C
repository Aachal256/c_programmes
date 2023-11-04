// USING WHILE LOOP SUM OF DIGITS...


#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of digits = %d",sum);
    return 0;
}



// USING FOR LOOP SUM OF DIGITS....

#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for( ;n>0; )
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of digits = %d",sum);
    return 0;
}


// USING DO WHILE LOOP SUM OF DIGITS....

#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    while(n>0);
    printf("sum of digits = %d",sum);
    return 0;
}

/*
I/P--)  Enter a number:213
O/P--)  sum of digits = 6
*/