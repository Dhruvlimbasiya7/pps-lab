<<<<<<< HEAD
#include<stdio.h>
void main ()
{
    int n ;

    printf("enter the factorial number you want :");
    scanf("%d",&n);

    if (n==1)
    {
        printf("factorial is : 1");
    }
    else
    {
        int j , answer = 2 , k ;
        for (int i = 1; i <= n; i++)
        {
            for ( j = 1; j < i; j++)
            {
                answer = answer +k;
            }
            
        }
        
    }
    
=======
#include<stdio.h>
void main ()
{
    int n ;

    printf("enter the factorial number you want :");
    scanf("%d",&n);

    if (n==1)
    {
        printf("factorial is : 1");
    }
    else
    {
        int j , answer = 2 , k ;
        for (int i = 1; i <= n; i++)
        {
            for ( j = 1; j < i; j++)
            {
                answer = answer +k;
            }
            
        }
        
    }
    
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}