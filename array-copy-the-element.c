// write a program in c to copy the element of one array into another array.take array values from the user.

#include<stdio.h>
int main()
{
    int a[5]={4,9,7,2,6};
    int b[5];
    for(int i=0;i<=4;i++)
    {
        b[i]=a[i];
    }
    printf("copy the elements = ");
    for(int i=0;i<=4;i++)
    {
    printf(" %d", b[i]);
    }
    return 0;
    
}

// o/p-- copy the elements =  4 9 7 2 6