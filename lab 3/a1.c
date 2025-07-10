<<<<<<< HEAD
#include <stdio.h>
void main()
{
    int cost_price , selling_price ;

    // price of item 
    printf("enter cost price of the item :");
    scanf("%d",&cost_price);

    // selling price of item
    printf("enter selling price of the item :");
    scanf("%d",&selling_price);

    // check profit or loss
    int diff ;
    diff = selling_price - cost_price ;

    //print result of profit or loss
    if (diff>=0)
    {
        if (diff==0)
        {
            printf("no profit no loss");
        }
        else{
            printf("profit of %d",diff);
        }
        
    }
    else{
        printf("loss of %d",(-1)*diff);
    }
    
=======
#include <stdio.h>
void main()
{
    int cost_price , selling_price ;

    // price of item 
    printf("enter cost price of the item :");
    scanf("%d",&cost_price);

    // selling price of item
    printf("enter selling price of the item :");
    scanf("%d",&selling_price);

    // check profit or loss
    int diff ;
    diff = selling_price - cost_price ;

    //print result of profit or loss
    if (diff>=0)
    {
        if (diff==0)
        {
            printf("no profit no loss");
        }
        else{
            printf("profit of %d",diff);
        }
        
    }
    else{
        printf("loss of %d",(-1)*diff);
    }
    
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}