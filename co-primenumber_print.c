 #include<stdio.h>
int main()
{
    int a,b,H;
    printf("Enter a two number:");
    scanf("%d%d",&a,&b);
    for(H=a<b ? a:b; H>=1; H--)
    {
    if(a%H==0 && b%H==0)
    break;
    }
    if(H==1)
    printf("co-prime number");
    else
    printf("Not co-prime number");
    
    return 0;
}