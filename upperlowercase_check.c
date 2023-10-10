//WAP to check whether a given alphabet is in uppercase or lowercase.


#include<stdio.h>
int main()
{
    char k;
    printf("Enter a character:");
    scanf("%c",&k);
    if(k>='A' && k<='Z')
    printf("UPPERCASE");
    if( k>='a' && k<='z')
    printf("LOWERCASE");
    return 0;
}

/*
i/p=   Enter a character:A
o/p=   UPPERCASE
*/