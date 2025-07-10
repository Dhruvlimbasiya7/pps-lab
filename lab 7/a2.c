#include<stdio.h>
void main ()
{
    int base , power , answer = 0;

    printf("enter the base :");
    scanf("%d",&base);

    printf("enter the power of base :");
    scanf("%d",&power);

    if (power==0)
    {
        printf("answer:1");
    }
    else
    {
        int j ;
        for (int i = 1; i <= power; i++)
        {
            for ( j = 1; j <=base ; j++)
            {
                int k=1 ;
                answer = answer + k ;
            }
            j=1 ; 
            
        }
        
    }
    printf("answer : %d",answer);
    
}