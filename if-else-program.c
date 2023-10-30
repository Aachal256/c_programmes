#include<stdio.h>
int main()
{
    int age=18,n;
    printf("Enter age :");
    scanf("%d",&n);
    if(n>=age)
    printf("you are eligible ");
    else
    printf("you are not eligible");
    return 0;

}

/*
Enter age :17
you are not eligible
*/