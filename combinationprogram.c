// write a program to calculate the number of combinations one can make from n items and r selected at a time[TSRS]

#include<stdio.h>
int main()
{
    int n,r,i ;
    printf("Enter n,r number :");
    scanf("%d%d",&n,&r);
    int nfact=1;
    int rfact=1;
    int nrfact=1;

    for(i=2;i<=n;i++)
    {
        nfact=nfact*i;
    }
    for(i=2;i<=r;i++)
    {
        rfact=rfact*i;
    }
    for(i=2;i<=n-r;i++)
    {
        nrfact=nrfact*i;
    }
    int ncr=nfact/(rfact*nrfact);
    printf("%d",ncr);
    return 0;
}

/*
i/p=)   Enter n,r number :7 4
o/p=)   35
*/