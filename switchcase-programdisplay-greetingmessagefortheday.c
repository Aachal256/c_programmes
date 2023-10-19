/*
write a program which takes the day number of a week and display greeting message for thee day.

*/
#include<stdio.h>
int main ()
{
    int x;
    printf("Enter your choice: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Monday is the new beginning");
        break;
        case 2:
        printf("Tuesday is no non veg day");
        break;
        case 3:
        printf(" lets have a cup of coffee");
        break;
        case 4:
        printf("Hello world");
        break;
        case 5:
        printf("Thank you god ,its friday");
        break;
        case 6:
        printf("enjoy saturday");
        break;
        case 7:
        printf("Not wake up early");
        break;
        default:
        printf("Invalide week number");
        }
        return 0;

}
/*
i/p=) Enter your choice: 7
o/p=) Not wake up early
*/