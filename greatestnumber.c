// WAP to find the greatest among three given numbers . print number once if the greatest number appears two or three times.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    if(a>c)
    printf("%d",a);
    else
    printf("5d",c);
    else
    if(b>c)
    printf("%d",b);
    else
    printf("%d",c);
    return 0;
}

/*
i/p=     Enter a three number:10 10 5
o/p=     10
*/