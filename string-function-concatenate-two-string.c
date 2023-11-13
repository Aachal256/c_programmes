// WRITE A FUNCTION TO CONCATENATE TWO STRINGS..

#include<stdio.h>
char * concatenate(char s1[],char s2[])
{
    int i,j;
    for(i=0;s1[i];i++);

    for(j=0;s2[j];j++,i++)
        s1[i]=s2[j];
    s1[i]='\0';
    return s1;
    
}
int main()
{
    char str[100]="mysirg education services";
    char suffix[]=" private limited";
    printf("%s",concatenate(str,suffix));
    printf("\n");
    return 0;
}

// o/p---    mysirg education services private limited