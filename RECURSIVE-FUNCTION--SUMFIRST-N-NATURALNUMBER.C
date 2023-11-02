/* write a recursive function to calculate sum of first N natural numbers..

#include<stdio.h>
int sum(int );
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("sum = %d",sum(n));
}
int sum(int x)
{
    if(x!=0)
    return x+sum(x-1);
    else
    return x;

}
*/
 
 // OR 

#include<stdio.h>
int add(int);
int main()
{
    printf("sum = %d",add(4));
}
int add(int n)
{
    if(n==1)
    return 1;
    return n+add(n-1);
}

// o/p=))  sum = 10
