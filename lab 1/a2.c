#include<stdio.h>
#include<math.h>
int main ()
{
    int p , r , t , n ; // n = no pf time interest compounded per year

    float si , ci , c;

    printf("enter principle amount= ");
    scanf("%d",&p);

    printf("enter rate of interest =");
    scanf("%d", &r);

    printf("enter time peroid = ");
    scanf("%d",&t);

    printf("enter no of time interest compunded per year = ");
    scanf("%d",&n);

    si=(p*r*t)/100;

    c=pow((1+r/n), n*t);

    ci=p*c ;

    printf("simple interest = %f\n",si);

    printf("compunded interest =%f",ci);
}
