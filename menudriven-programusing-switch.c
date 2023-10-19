/*Write a menu driven program with the following option: 
    1.factorial
    2.Even and odd
    3.area of circle  
    4.sum of first n number 
    5.Exit 
    */


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,n,f;
    printf("\n1.factorial");
    printf("\n2.Even and odd");
    printf("\n3.area of circle");
    printf("\n4.sum of first n number");
    printf("\n5.Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("\nEnter a number: ");
        scanf("%d",&n);
        for(f=1;n;n--)
        f=f*n;
        printf("factorial is = %d",f);
        break;
        case 2:
        printf("\nEnter a number: ");
        scanf("%d",&n);
        if(n%1)
        printf("odd number");
        else
        printf("Even number");
        break;
        case 3:
        printf("\nEnter a number: ");
        scanf("%d",&n);
        printf(" area of circle is = %f",3.14*n*n);
        break;
        case 4:
        printf("\nEnter a number: ");
        scanf("%d",&n);
        for(f=0;n;n--)
        f=f+n;
        printf("sum = %d",f);
        break;
        case 5:
        exit(0);
        //printf("Exit");
        break;
        default:
        printf("\nInvalid number, Retry");
    }
    return 0;
}

/*
1.factorial
2.Even and odd
3.area of circle
4.sum of first n number
5.Exit
Enter your choice: 1

Enter a number: 5

factorial is = 120
*/
