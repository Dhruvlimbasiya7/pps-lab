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
        printf("factorial is :%d",answer);
        
    }
    
}