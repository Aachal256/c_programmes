// WAP to check whether roots of a given quadratic equation are real and distict,,real and equal,,or imaginary root..

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(b*b-4*a*c>0)
    printf("Real and distinct");
    else if(b*b-4*a*c<0)
    printf("imaginary roots");
    else
    printf("Real and equal");
    return 0;
}

/*
i/p=    Enter three number:12 12 12
o/p=    imaginary roots
*/
