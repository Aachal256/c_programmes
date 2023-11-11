//WRITE A PROGRAM TO COUNT SPACES IN A GIVEN STRING.

#include<stdio.h>
int main()
{
    char str[50],ch=' ';
    int count=0,i;
    printf("Enter a string :");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    
    for(i=0;str[i];i++)
        if(str[i]==ch)
            count++;
    printf("Count of space is %d",count);
    return 0;
}

/*
i/p-   Enter a string :aachal thaware software developer
o/p-   Count of space is 3
*/