#include<stdio.h>
void main()
{
    int a , b , multiplication ;

    printf("enter number A = ");
    scanf("%d", &a);

    printf("enter number B = ");
    scanf("%d", &b);

    multiplication=a*b;

    if (multiplication==100)
    {
       printf("multiplication is equal to 100");
    }
    else{
        printf("multiplication is not equal to 100");
    }
    
}