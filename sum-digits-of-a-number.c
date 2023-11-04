// sum digits of number,..
#include <stdio.h>
 
int main(void)
{
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
 
    // Keep dividing until the number is not zero
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("Sum of digits of the number is = %d", sum);
    return 0;
}

/*
i/p=)  Enter a number: 123
o/p-)  Sum of digits of the number is = 6
*/