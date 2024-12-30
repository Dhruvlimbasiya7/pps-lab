#include<stdio.h>
void main ()
{
    int a , b , multiplication ;

    printf("enter number A = ");
    scanf("%d", &a);

    printf("enter number B = ");
    scanf("%d", &b);

    multiplication=a*b;

    if (multiplication>a/2)
    {
       printf("multiplication is greater than half of a");
    }
    else{
        printf("multiplication is not greater than half of a");
    }
}