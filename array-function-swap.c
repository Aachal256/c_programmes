//  WRITE A FUNCTION TO SWAP TWO ELEMENTS OF GIVEN ARRAY WITH SPECIFIED INDICES..
#include<stdio.h>
void swap(int a[]);
int main()
{
    int arr[2]={3,4};
    printf("Before swap :%d %d",arr[0],arr[1]);
    swap(arr);
    printf("\nAfter swap: %d %d",arr[0],arr[1]);
}
void swap(int a[])
{
    int t=a[0];
    a[0]=a[1];
    a[1]=t;
}

/*
i/p---  Before swap :3 4
o/p---  After swap: 4 3
*/