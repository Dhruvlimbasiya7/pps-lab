#include<stdio.h>
void main ()
{
    int n , sum=0;

    printf("enter last number you want :");
    scanf("%d",&n);

    for (int i = 1 ; i <= 2*n; i++)
    {
        if (i%2!=0)
        {
            sum+=i;
        }
        
    }

    printf("sum of odd numbers : %d" , sum);
    
}