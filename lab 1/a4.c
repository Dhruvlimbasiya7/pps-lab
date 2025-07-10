#include<stdio.h>
void main ()
{
    int a[5] , sum ;

    printf("enter digit 1 =");
    scanf("%d",&a[0]);

    printf("enter digit 2 =");
    scanf("%d",&a[1]);

    printf("enter digit 3 =");
    scanf("%d",&a[2]);

    printf("enter digit 4 =");
    scanf("%d",&a[3]);

    printf("enter digit 5 =");
    scanf("%d",&a[4]);  

    sum=a[0]+a[1]+a[2]+a[3]+a[4];

    printf("sum of digits=%d", sum);

}