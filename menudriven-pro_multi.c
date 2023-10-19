/*Write a menu driven program with the following option: 

    1.calculate LCM of two number
    2.calculate sum of the digits of a number
    3.volume of a cuboid 
    4.check whether a given number is prime or not 
    5.Exit 
    */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b,c,L;
    printf("\n1.calculate LCM of two number");
    printf("\n2.calculate sum of the digits of a number");
    printf("\n3.volume of a cuboid ");
    printf("\n4.check whether a given number is prime or not");
    printf("\nEnter your choice :");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        for(L=a>b? a:b ; L=a*b ; L++)
        if(L%a==0 && L%b==0)
        break;
        printf(" LCM =%d",L);
        break;

        case 2:
        printf("Enter a number:");
        scanf("%d",&a);
        b=0;
        while(a)
        {
        b=b+a/10;
        b=b%10;
        }
        printf("sum is %d",b);
        break;

        case 3:
        printf("Enter a numbers:");
        scanf("%d%d%d",&a,&b,&c);
        printf("volume of a cuboid %d",a*b*c);
        break;

        case 4:
        printf("Enter a number: ");
        scanf("%d",&a);
        for(b=2; b<=a-1;b++)
        {
            if(a%b==0)
            break;
            }
        if(b==a)
        printf("prime number");
        else
        printf("not prime number");
        break;

        case 5:
        printf("Exit");
        //Exit(0);
        default:
        printf("Invalide");
        }
return 0;
}
/*
1.calculate LCM of two number
2.calculate sum of the digits of a number
3.volume of a cuboid 
4.check whether a given number is prime or not

Enter your choice :4
Enter a number: 5
prime number
*/