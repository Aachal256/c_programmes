//write a programm to c count digit of a given number using recursive function..

#include<stdio.h>
int count(int);
int main()
{
    printf("count number = %d",count(3509));
}
int count (int n)
{
    if(n==0)
    return 0;
    return count (n/10)+1;
}

/*
o/p-)  count number = 4
*/