//WAP to which takes  a   month number  as an input and display number of days in that month..
 
 #include<stdio.h>
 int main()
 {
    int a;
    printf("Enter your choice : ");
    scanf("%d",&a);
    switch(a)
    {
        case 2:
        printf("28 or 29 days");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("30 days");
        break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 10:
        case 12:
        printf("31 days");
        break;
        default:
        printf("Invalid month number");
        }
        return 0;
 }

 /*
 i/p=) Enter your choice : 7
o/p=)  31 days
 */