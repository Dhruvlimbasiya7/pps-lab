#include<stdio.h>
void main()
{
    int r ;

    printf("enter number of rows: ");
    scanf("%d",&r);

    // printf("enter number of coloums:");
    // scanf("%d",&c); 

    int a[r][r];

    //scaning values
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("enter value of a[%d][%d]:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        
    }

    //printing matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //printing matrix as question
    int psum=0 , ssum=0;
    for (int i = 0; i < r; i++)
    {
        psum += a[i][i];

        if (r-i-1!=i)
        {
            ssum += a[i][r-i-1];
        }

    }
    printf("sum of primary diagonal:%d \nsum of secondary diagonal:%d",psum,ssum);
}