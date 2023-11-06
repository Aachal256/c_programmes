// WRITE A PROGRAM TO SORT ELEMENT OF AN ARRAY OF SIZE 5..TAKE ARRAY VALUES FROM THE USER..

#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    printf("Enter 5 number:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++) //i=0
    {
        for(j=i+1;j<5;j++) //j=1
        {
            if(a[i]>a[j])   
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }

    }
    printf("Sorting Element in ascending order = ");
    for(i=0;i<5;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}

/*
i/p--   Enter a number:4 2 3 5 1
 o/p--  Sorting Element in ascending order  1 2 3 4 5
*/
// By default array sort in assending order..
