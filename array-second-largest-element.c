//write a program to find second largest in array ..Take array values from the user.

#include<stdio.h>
int main()
{
    int a[4],i,max,smax=0;
    printf("Enter 4 Elements:");
    for(i=0;i<=3;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<4;i++)
    {
        if(max<a[i])
        {
        smax=max;
        max=a[i];
        }
        else if(smax<a[i] && a[i]!=max)
        smax=a[i];
    }
    printf("\nsecond largest =");
    printf("%d",smax);
    return 0;
    
}
/*
i/p--- Enter 4 Elements:33 65 17 24

o/p----  second largest =33
*/
    
 