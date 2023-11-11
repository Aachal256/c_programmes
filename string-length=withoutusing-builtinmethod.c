// WRITE A PROGRAM TO CALCULATE THE LENGTH OF THE STRING.(WITHOUT USING BUILTIN METHOD)

#include<stdio.h>
#include<string.h>
int q1()
{
    char str[33];
    int i;
    printf("Enter a string :");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    printf("lengthh of string = %d",i);
    return 0;

}

// OR

#include<stdio.h>
#include<string.h>
int main()
{
    char str[33];
    int i=0;
    printf("Enter a string ");
    gets(str);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("length of string = %d",i);
    return 0;

}

/*
i/p--   Enter a string : aachal thaware
o/p--    length of string = 14

*/

