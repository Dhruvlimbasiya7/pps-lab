<<<<<<< HEAD
#include<stdio.h>
void main()
{
    int a=65 ;

    // 1st part 
    for (int i = 1; i <= 5 ; i++)
    {
        for (int space = 5; i <= space - 1 ; space--) 
        {
            printf("  ");
        }

        for (int j = 1 ; j <= 2*i -1 ; j++)
        {
            if (j%2==1)
            {
               if (i%2!=0)
                {
                printf("%d",j);
                }
                else{
                printf("%c",a++);
                } 
            }
            else{
                printf("  ");
            }
            
            
            
        }
        printf("\n");
        
    }


    // 2nd part

    int b;

    printf("enter number of row :");
    scanf("%d",&b);

    // for (int i = b ; i >= 1; i--)
    // {
    //     for (int j = 1 ; j <= i ; j++)
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }


    for (int i=b; i>=1 ; i-- ) 
		{
            for (int space = 1; space <= b - i; space++) 
            {
                printf("  ");
            }

			for (int j = 1 ; j <= i ; j++)
			{
				printf("*");
			}
			printf("\n");
		}
    
    
=======
#include<stdio.h>
void main()
{
    int a=65 ;

    // 1st part 
    for (int i = 1; i <= 5 ; i++)
    {
        for (int space = 5; i <= space - 1 ; space--) 
        {
            printf("  ");
        }

        for (int j = 1 ; j <= 2*i -1 ; j++)
        {
            if (j%2==1)
            {
               if (i%2!=0)
                {
                printf("%d",j);
                }
                else{
                printf("%c",a++);
                } 
            }
            else{
                printf("  ");
            }
            
            
            
        }
        printf("\n");
        
    }


    // 2nd part

    int b;

    printf("enter number of row :");
    scanf("%d",&b);

    // for (int i = b ; i >= 1; i--)
    // {
    //     for (int j = 1 ; j <= i ; j++)
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }


    for (int i=b; i>=1 ; i-- ) 
		{
            for (int space = 1; space <= b - i; space++) 
            {
                printf("  ");
            }

			for (int j = 1 ; j <= i ; j++)
			{
				printf("*");
			}
			printf("\n");
		}
    
    
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}