#include<stdio.h>
void main()
{
    int a , b , multiplication ;

    printf("enter number A = ");
    scanf("%d", &a);

    printf("enter number B = ");
    scanf("%d", &b);

    if (( a%6==0 && a%7==0 ) && ( b%6==0 && b%7==0 ))
    {
       printf("number a and b are evenly divisible by 6 and 7 ");
    }
    else{
        printf("number a and b are not evenly divisible by 6 and 7 ");
    }
    
}