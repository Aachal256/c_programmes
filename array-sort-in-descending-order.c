// WRITE A PROGRAM TO SORT AN ARRAY OF SIZE 5 ELEMENT IN  DESCENDING ORDER.. 

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
            if(a[i]<a[j])   
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }

    }
    printf("Sorting Element in descending order = ");
    for(i=0;i<5;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}

/*
i/p--    Enter 5 number:1 2 3 4 5
 O/P--   Sorting Element in descending order =  5 4 3 2 1
*/