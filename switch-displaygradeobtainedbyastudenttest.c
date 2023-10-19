/*
write a program to find and display grade obtained by a student in a test . Grading specification are as follows.

-> marks from 90 to 100: Grade A
-> marks from 80 to less than 90: Grade B
-> marks from 70 to less than 80: Grade C
-> marks from 60 to less than 70: Grade D
-> marks from 50 to less than 60: Grade E
-> marks below 50 :grade F
 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m;
    printf("Enter marks: ");
    scanf("%d",&m);
    switch(m)
    {
        case 90 ... 100:
            printf("Grade A");
            break;
        case 80 ... 89:
            printf("Grade B");
            break;
        case 70 - 79:
            printf("Grade C");
            break;
        case 60 ... 69:
            printf("Grade D");
            break;
        case 50 ... 59:
            printf("Grade E");
            break;
        case 0 - 49:
            printf("Grade F");
            break;
        default:
        printf("Invalide");

    }
    return 0;
}

/*
i/p=) Enter marks: 87
o/p=) Grade B
*/