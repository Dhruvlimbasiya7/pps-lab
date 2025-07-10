#include<stdio.h>
void main() 
{
    int x ;

    printf("enter number X = ");
    scanf("%d", &x);


    if (x<=10)
    {
        printf("Y is equal to %d",(3*x)+5);
    }
    else{
        printf("Y is equal to %d",(8*x)+5);
    }
    
}