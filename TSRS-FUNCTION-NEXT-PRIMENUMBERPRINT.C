//write a function to find the next prime number of a given number..[TSRS] TAKE SOMETHING,RETURN SOMETHING

#include<stdio.h>
int prime(int);
int main()
{
    int s,x=7;
    s=prime(x);
    printf("next prime number = ",s);
    printf("%d",s);
    return 0;
}
int prime (int n)
{
    int i;
    for(n++ ; ; n++)
    {
        for( i=2;i<=n;i++)
        
            if(n%i==0)
            break;
            if(i==n)
            {
                return n;
                break;
            }
    }
}

/*
o/p-)  next prime number = 11
*/