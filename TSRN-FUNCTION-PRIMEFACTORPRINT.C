//write a function to print all prime factors of a given number. for example if the number is 36 then your result should be 2,2,3,3,[TSRN] TAKE SOMETHING,RETURN NOTHING

#include<stdio.h>
void contain(int);
int main()
{
    int s,x;
    printf("Enter number :");
    scanf("%d",&x);
    contain(x);
    return 0;
}
void contain(int n)
{
    int i=2;
    while(n>1)
    {
        while(n%i==0)
        {
            printf(" %d",i);
            n=n/i;
        }
        i++;

        }
    }

/*
i/p=)  Enter number :36
o/p=)   2 2 3 3
*/
     
