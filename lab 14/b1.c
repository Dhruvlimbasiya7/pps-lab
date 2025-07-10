#include<stdio.h>
void main()
{
    int r ,c;

    printf("enter number of rows: ");
    scanf("%d",&r);

    printf("enter number of coloums:");
    scanf("%d",&c);

    int a[r][c];
    
    //checking for odd or even
    if ((r*c)%2==0)
    {
        main();
    }
    
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

    //storing in temp
    int temp[r*c] , b=0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                temp[b]=a[i][j];
                printf("%d\t",temp[b]);
                b++;
            }
        } 
    int d=(r*c)/2;
    printf("\nmedian:%d",temp[d]);
}