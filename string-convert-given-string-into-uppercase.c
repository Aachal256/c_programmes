//write a program to convert a given string into uppercase.
#include<stdio.h>
int main()
{
    char str[50];
    int i;
    printf("Enter a string:");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++)
    {

    if(str[i]>='a' && str[i]<='z')
    str[i]=str[i]-32;
    }
    printf("convert into uppercase : %s",str);
    return 0;
}

/*
i/p-- Enter a string:achal
o/p-- convert into uppercase : ACHAL
*/