<<<<<<< HEAD
#include<stdio.h>
void main ()
{
    int a ;
    printf("enter size of array :");
    scanf("%d",&a);

    int sort[a];

    for (int i = 0; i < a; i++)
    {
        printf("entre value of sort[%d]:",i+1);
        scanf("%d",&sort[i]);
    }

    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-1; j++)
        {
            if (sort[j] > sort[j+1])
            {
                int temp = sort[j];
                sort[j] = sort[j+1];
                sort[j+1] = temp ;
            }
        }
        
    }
    
    for (int i = 0; i < a; i++)
    {
        printf("%d ",sort[i]);
    }
    
=======
#include<stdio.h>
void main ()
{
    int a ;
    printf("enter size of array :");
    scanf("%d",&a);

    int sort[a];

    for (int i = 0; i < a; i++)
    {
        printf("entre value of sort[%d]:",i+1);
        scanf("%d",&sort[i]);
    }

    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-1; j++)
        {
            if (sort[j] > sort[j+1])
            {
                int temp = sort[j];
                sort[j] = sort[j+1];
                sort[j+1] = temp ;
            }
        }
        
    }
    
    for (int i = 0; i < a; i++)
    {
        printf("%d ",sort[i]);
    }
    
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}