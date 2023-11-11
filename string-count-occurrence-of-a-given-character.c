// WRITE A PROGRAM TO COUNT THE OCCURRENCE OF A GIVEN CHARACTER IN A GIVEN STRING..
#include<stdio.h>
int main()
{
    char str[50],V[]="aeiouAEIOU";
    int i,k,count=0;
    printf("Enter a string");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++)
        for(k=0;V[k];k++)
            if(str[i]==V[k])
                count++;
    printf("Vowel Count is %d",count);   
    return 0;  
}

/*
i/p--  Enter a string mysirg education service
o/p--  Vowel Count is 9
*/
 
 
 

 
 
