<<<<<<< HEAD
#include<stdio.h>
void main ()
{
    int a[5] , sum =0 ;

    for ( int i =0 ; i <5 ; i++ )
    {
        printf("enter the number %d :", i+1);
        scanf("%d",&a[i]);

        sum+=a[i] ;
    }

    // taking the process sign

    int b ;

    printf("enter 1(for sum ) , 2 (for average) , 3 (for largest number) , 4 (for smallest number) : ");
    scanf("%d",&b);

    switch (b)
    {
    case 1 : 
        printf("sum of 5 digits are :%d" , sum);
        break;

    case 2 :
        int average ;
        average = sum / 5 ;
        printf("average of 5 digits is : %d", average);

    case 3 :
        int max ;
        
        max = a[0];

        for (int i = 0; i < 5; i++)
        {
            if (a[i] > max)
            {
                max = a[i] ;
            }
            
        }
        printf("largest number is :%d" , max);
        break;

    case 4 :
        int min ;
    
        min = a[0];

        for (int i = 0; i < 5; i++)
        {
            if (a[i] < min )
            {
                min = a[i] ;
            }
            
        }
        printf("smallest number is : %d", min);
        break;

    default:
        printf("invalid input");
        break;
    }
=======
#include<stdio.h>
void main ()
{
    int a[5] , sum =0 ;

    for ( int i =0 ; i <5 ; i++ )
    {
        printf("enter the number %d :", i+1);
        scanf("%d",&a[i]);

        sum+=a[i] ;
    }

    // taking the process sign

    int b ;

    printf("enter 1(for sum ) , 2 (for average) , 3 (for largest number) , 4 (for smallest number) : ");
    scanf("%d",&b);

    switch (b)
    {
    case 1 : 
        printf("sum of 5 digits are :%d" , sum);
        break;

    case 2 :
        int average ;
        average = sum / 5 ;
        printf("average of 5 digits is : %d", average);

    case 3 :
        int max ;
        
        max = a[0];

        for (int i = 0; i < 5; i++)
        {
            if (a[i] > max)
            {
                max = a[i] ;
            }
            
        }
        printf("largest number is :%d" , max);
        break;

    case 4 :
        int min ;
    
        min = a[0];

        for (int i = 0; i < 5; i++)
        {
            if (a[i] < min )
            {
                min = a[i] ;
            }
            
        }
        printf("smallest number is : %d", min);
        break;

    default:
        printf("invalid input");
        break;
    }
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}