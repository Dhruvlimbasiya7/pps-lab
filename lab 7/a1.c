<<<<<<< HEAD
#include<stdio.h>
void main ()
{
    int n ;
    printf("enter the last number you want :");
    scanf("%d",&n);

    int sum=0 ;

    for (int i = 1; i <=n; i++)
    {
        if(i%2!=0)
        {
            sum+=i ;
            printf("+%d",i);
        }
        else{
            sum-=i ;
            printf("-%d",i);
        }
    }

    printf("\nsum is equal to :%d",sum);
    
=======
#include<stdio.h>
void main ()
{
    int n ;
    printf("enter the last number you want :");
    scanf("%d",&n);

    int sum=0 ;

    for (int i = 1; i <=n; i++)
    {
        if(i%2!=0)
        {
            sum+=i ;
            printf("+%d",i);
        }
        else{
            sum-=i ;
            printf("-%d",i);
        }
    }

    printf("\nsum is equal to :%d",sum);
    
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}