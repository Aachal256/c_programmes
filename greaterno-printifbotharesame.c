// WAP to print greater between two numbers.print one number if both the same....

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two number:");
    scanf("%d%d",&x,&y);
    if(x<y||x==y)
    printf("%d",y);
     
    return 0;
}

OR--

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two number:");
    scanf("%d%d",&x,&y);
    if(x>y)
    printf("%d",x);
    else
    printf("%d",y);
     
    return 0;
}


/*
i/p=    Enter two number:45 45
           
o/p=    45
*/