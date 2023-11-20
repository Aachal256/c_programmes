//usiing pointer function to swap two numbers...
#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter a two number :");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("swap = %d %d",a,b);
    return 0;
}
void swap (int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

 /*
 i/p--- Enter a two number :10 20
o/p---  swap = 20 10
 */
 

 