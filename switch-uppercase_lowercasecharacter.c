/*
WAP to check whether a given character is uppercase alphabet or lower case alphabet or
some other special character , using switch case statement.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A' ... 'Z':
        printf("Uppercase character");
        break;
        case 'a' ... 'z':
        printf("Lowercase character");
        break;
        default:
        printf("Special character");
    }
    return 0;
}

/*
i/p=) Enter a character: H
o/p=) Uppercase character
*/