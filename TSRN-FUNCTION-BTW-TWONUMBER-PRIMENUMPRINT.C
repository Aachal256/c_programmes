//write a function to print all prime number between two given number [TSRN]

#include<stdio.h>
void printprime(int ,int);
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printprime(a,b);
    return 0;

}
void printprime(int l,int u)
{
    int i,x;
    for(x=l;x<=u;x++)
    {
    for(i=2;i<=x-1;i++)
    if(x%i==0)
    break;
    if(i==x)
    printf(" %d",x);
     
    }
}
 /*
 i/p=)  Enter two numbers:10 20
 o/p=)  11 13 17 19
 */   

     


