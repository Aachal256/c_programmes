/*Write a menu driven program with the following option: 
    1.Addition 
    2.subtraction 
    3.multiplication 
    4.Division 
    5.Exit
    */


#include<stdio.h>
int main()
{
    int x,a,b;
    printf("\n1.Addition");
    printf("\n2.subtraction");
    printf("\n3.multiplication");
    printf("\n4.Division");
    printf("\n5.Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("\nEnter two number: ");
        scanf("%d%d",&a,&b);
        printf("sum is = %d",a+b);
        break;
        case 2:
        printf("\nEnter two number: ");
        scanf("%d%d",&a,&b);
        printf("difference is = %d",a-b);
        break;
        case 3:
        printf("\nEnter two number: ");
        scanf("%d%d",&a,&b);
        printf("multiplication is = %d",a*b);
        break;
        case 4:
        printf("\nEnter two number: ");
        scanf("%d%d",&a,&b);
        printf("division is = %d",a/b);
        break;
        case 5:
        printf("Exit");
        break;
        default:
        printf("\nInvalid number, Retry");
    }
    return 0;
}

/*
o/p=) 
1.Addition
2.subtraction
3.multiplication
4.Division
5.Exit
Enter your choice: 1

Enter two number: 10 20
sum is = 30
*/