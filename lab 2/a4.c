#include<stdio.h>
void main()
{
    int a , b , multiplication ;

    printf("enter number A = ");
    scanf("%d", &a);

    printf("enter number B = ");
    scanf("%d", &b);

    if (( a%b==0 ))
    {
       printf("number a is evenly divisible by b");
    }
    else{
        printf("number a is not evenly divisible by b");
    }
    
}