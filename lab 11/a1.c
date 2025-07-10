<<<<<<< HEAD
#include<stdio.h>
void main()
{
    int n ;
    printf("enter a number of series you want:");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n ; i++)
    {
        printf("enter number a[%d] :",i);
        scanf("%d",&a[i]);
        
    }

    int max ;
        
        max = a[0];

        for (int i = 0; i < n ; i++)
        {
            if (a[i] > max)
            {
                max = a[i] ;
            }
            
        }
        printf("largest number is :%d\n" , max);

    int min ;
    
        min = a[0];

        for (int i = 0; i < n ; i++)
        {
            if (a[i] < min )
            {
                min = a[i] ;
            }
            
        }
        printf("smallest number is : %d", min);
    
=======
#include<stdio.h>
void main()
{
    int n ;
    printf("enter a number of series you want:");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n ; i++)
    {
        printf("enter number a[%d] :",i);
        scanf("%d",&a[i]);
        
    }

    int max ;
        
        max = a[0];

        for (int i = 0; i < n ; i++)
        {
            if (a[i] > max)
            {
                max = a[i] ;
            }
            
        }
        printf("largest number is :%d\n" , max);

    int min ;
    
        min = a[0];

        for (int i = 0; i < n ; i++)
        {
            if (a[i] < min )
            {
                min = a[i] ;
            }
            
        }
        printf("smallest number is : %d", min);
    
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}