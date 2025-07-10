#include<stdio.h>
void main ()
{
    int current_year , joining_year , n , i , j , sub , temp;
    
    printf("enter number of employee =");
    scanf("&d",&n);
    
    int a[n][n];

    for ( i = 0; i <n; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            if (j==0)
            {
                printf("Enter current year=\n");
                scanf(" %d",&a[i][j]);
            }
            else{
                printf("\nEnter joining year =");
                scanf("%d",&a[i][j]);
            }
        }
        
    }

    for ( i = 0; i <n; i++)
    {
        sub = a[i][0] - a[i][1];

            if (sub>3)
            {
                printf("employee %d got bonus of 2500\n", i+1 );
            }
            else{
                printf("employee %d will not get bonus of 2500", i+1);
            }
    }


}