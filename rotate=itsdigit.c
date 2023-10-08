// WAP to take a three digit number from the user and rotate its digits by one position towards the right.


#include<stdio.h>
int main()
{
    int a,k;
    printf("Enter a three digit number:");
    scanf("%d",&a);
    k=a % 10 * 100 + a / 10;
    printf("rotate one position toward = %d",k);
    return 0;


}

/*
i/p=   Enter a three digit number:456
o/p=   rotate one position toward = 645
*/