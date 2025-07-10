<<<<<<< HEAD
#include<stdio.h>
void main ()
{
    int n , a ;

    printf("enter starting number you want :");
    scanf("%d",&a);

    printf("enter last number you want :");
    scanf("%d",&n);

    for (int i = a ; i <= n; i++)
    {
        if ((i%2==0) && (i%5!=0))
        {
            printf("%d\t",i);
        }
        
    }
    
=======
#include<stdio.h>
void main ()
{
    int n , a ;

    printf("enter starting number you want :");
    scanf("%d",&a);

    printf("enter last number you want :");
    scanf("%d",&n);

    for (int i = a ; i <= n; i++)
    {
        if ((i%2==0) && (i%5!=0))
        {
            printf("%d\t",i);
        }
        
    }
    
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}