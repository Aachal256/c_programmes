//WRITE A PROGRAM TO FIND SECOND LARGEST IN AN ARRAY.TAKE ARRAY VALUES FROM THE USER.

#include<stdio.h>
#include<limits.h>
int main()
{
    int a[5]={8,2,5,1,7};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=4;i++)
    {
        if(max<a[i])
        {
            smax=max;
            max=a[i];
        }
        else if(smax<a[i] && max!=a[i])
        smax=a[i];
    }
    printf("second largest=");
    printf("%d",smax);
    return 0;
}

// o/p--  second largest=7