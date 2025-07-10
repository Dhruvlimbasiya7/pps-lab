<<<<<<< HEAD
#include<stdio.h>
#include<math.h>
void main()
{
    int a ;

    printf("enter a number :");
    scanf("%d",&a);

    for (int i = 1; i<=a ; i++)
    {
        float b = (float)a /i;

        if ( (b-floor(b)) == 0 )
        {
            printf("%d\t",i);   
        }
        
    }
    
=======
#include<stdio.h>
#include<math.h>
void main()
{
    int a ;

    printf("enter a number :");
    scanf("%d",&a);

    for (int i = 1; i<=a ; i++)
    {
        float b = (float)a /i;

        if ( (b-floor(b)) == 0 )
        {
            printf("%d\t",i);   
        }
        
    }
    
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}