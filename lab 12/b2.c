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
    

    // median 
    int mid = a/2 ;
    if (a%2 == 0)
    {
        printf("\n median is : %f",(sort[mid]+sort[mid-1])/2.);
    }
    else{
        printf("\n median is : %d",sort[mid]);
    }
}