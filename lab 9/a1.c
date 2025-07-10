#include<stdio.h>
void main ()
{
    int n ;

    printf("enter last number you want :");
    scanf("%d",&n);

    for (int i = 1 ; i <= n; i++)
    {
        if (i%2!=0)
        {
            printf("%d\t",i);
        }
        
    }
    
}