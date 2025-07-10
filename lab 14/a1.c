<<<<<<< HEAD
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
            printf("enter value of a[%d][%d]:",i,j);
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

    //printing matrix as question
    for (int i = 0; i < r; i++)
    {
        if (i%2==0)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d\t",a[i][j]);
            }
        }
        else{
            for (int j = c-1; j >= 0; j--)
            {
                printf("%d\t",a[i][j]);
            }
        }
        printf("\n");
    }
=======
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
            printf("enter value of a[%d][%d]:",i,j);
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

    //printing matrix as question
    for (int i = 0; i < r; i++)
    {
        if (i%2==0)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d\t",a[i][j]);
            }
        }
        else{
            for (int j = c-1; j >= 0; j--)
            {
                printf("%d\t",a[i][j]);
            }
        }
        printf("\n");
    }
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}