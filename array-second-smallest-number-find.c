//WRITE A PROGRAM TO FIND SECOND SMALLEST NUMBER IN AN ARRAY.TAKE ARRAY VALUES FROM THE USER.

#include<stdio.h>
#include<limits.h>
int main()
{
    int a[5]={8,3,5,2,7};
    int min=INT_MAX;
    int smin=INT_MAX;
    for(int i=0;i<=4;i++)
    {
        if(min>a[i])
        {
            smin=min;
            min=a[i];
        }
        else if(smin>a[i] && min!=a[i])
        smin=a[i];
    }
    printf("second smallest number = ");
    printf("%d",smin);
    return 0;
}

// o/p--    second smallest number = 3