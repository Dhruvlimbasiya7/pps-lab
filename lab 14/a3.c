#include<stdio.h>
void main()
{
    int r ,c;

    printf("enter number of rows: ");
    scanf("%d",&r);

    printf("enter number of coloums:");
    scanf("%d",&c);

    int a[r][c];

    //scaning values
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter value of a[%d][%d]:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        
    }

    //printing matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //cheking 0 in matrix as question
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]==0)
            {
                /* code */
            }
            
        }
        printf("\n");
    }
}