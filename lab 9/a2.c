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
    
}