/* WAP to take marks of 5 subject from the user . assume marks are given out of 100 and.
passing marks is 33. now display whether the candidate passed the examination or faild.*/


#include<stdio.h>
int main()
{
    int H,E,M,P,C,marks;
    printf("Enter five subject marks");
    scanf("%d%d%d%d%d",&H,&E,&M,&P,&C);
    if(H>=33 && E>=33 && M>=33 && P>=33 && C>=33)
    printf("Result: pass");
    else
    printf("fail");
    return 0;

}

/*
i/p=   Enter five subject marks :67 55 87 46 55
o/p=   Result: pass

*/