#include<stdio.h>
void main ()
{
    int n , i;

    printf("enter number of items perchased=");
    scanf("%d",&n);

    int a[n] ;
    float final_bill ,sum=0 ;

    for (int i = 0; i < n ; i++)
    {
        printf("enter the price of item %d =", i+1);
        scanf("%d",a[i]);
        sum=sum+a[i];
    }

    printf("bill=%d\n",sum);

    if (sum>=1000)
    {
        final_bill=sum - sum*0.1;
        printf("final bill =%f", final_bill);
    }
    else{
        printf("final bill=%d",sum);
    }
    
    
}