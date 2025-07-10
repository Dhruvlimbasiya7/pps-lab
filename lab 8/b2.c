<<<<<<< HEAD
#include<stdio.h>
void pattern(int x , int y) 
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
void main ()
{
    int a ,b ;

    printf("enter number of rows :");
    scanf("%d",&a);

    printf("enter number of columns :");
    scanf("%d",&b);

    pattern(a,b);
=======
#include<stdio.h>
void pattern(int x , int y) 
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
void main ()
{
    int a ,b ;

    printf("enter number of rows :");
    scanf("%d",&a);

    printf("enter number of columns :");
    scanf("%d",&b);

    pattern(a,b);
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}