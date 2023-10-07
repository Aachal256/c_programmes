// WAP to input three character from the user and display character with their corresponding ascii codes.

#include<stdio.h>
int main()
{
    char a,b,c;
    printf("Enter a three character:");
    scanf("%c %c %c",&a,&b,&c);
    printf("%c=%d,%c=%d,%c=%d",a,a,b,b,c,c);
    return 0;
}