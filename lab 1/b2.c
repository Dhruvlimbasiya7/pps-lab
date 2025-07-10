#include<stdio.h>
void main ()
{
    int h , b , l ;
    float area ;

    printf("Enter height :");
    scanf("%d",&h);

    printf("Enter base :");
    scanf("%d",&b);

    printf("Enter length :");
    scanf("%d",&l);

    area=(l*b*h)/2;

    printf("area of triangle = %f", area);

    
}