// WAP to check whether a given character is an alphabet(uppercase), an alphabet (lowercase) a digit or a special character..

#include<stdio.h>
int main()
{ 

     char ch;
     printf("Enter a character");
     scanf("%c",&ch);
     if(ch>='A' && ch<='Z')
     printf("upper");
     else if(ch>='a' && ch<='z')
     printf("lower");
     else if(ch>='0' && ch<='9')
     printf("digit");
     else
     printf("special character");
     return 0;
}

/*
i/p=  Enter a character:A  ||Enter a character:a  ||Enter a character:6
 o/p=  upper               ||lower                ||digit

*/