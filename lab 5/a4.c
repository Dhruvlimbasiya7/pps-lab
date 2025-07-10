#include<stdio.h>
void main ()
{
    int a , b ;

    printf("enter value of A :");
    scanf("%d",&a);

    printf("enter value of B :");
    scanf("%d",&b);

    switch (a>b)
    {
    case 0:
        printf("%d is larger",b);
        break;
    
    case 1:
        printf("%d is larger",b);
        break;
    }
}