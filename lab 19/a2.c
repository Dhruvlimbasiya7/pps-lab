#include<stdio.h>
#include<stdlib.h>
void main (){
    int **array;
    int sum =0 ;
    int n , m;

    printf("how many number of rows you want to enter:");
    scanf("%d",&n);
    printf("how many number of columns you want to enter:");
    scanf("%d",&m);

    array = (int**)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++){
        array[i] = (int*)malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m ; j++)
        {
            printf("enter value of array[%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++){
            sum = sum + array[i][j];
        }
    }
    printf("sum of all elements in array is %d",sum);
    printf("\n");
    
    free(array);
    
}