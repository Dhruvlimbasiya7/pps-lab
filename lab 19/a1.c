#include<stdio.h>
#include<stdlib.h>
void main (){
    int *array;
    int sum =0 ;
    int n;

    printf("how many number of array you want to enter:");
    scanf("%d",&n);

    array = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        printf("enter the value of array[%d] : ",i);
        scanf("%d",&array[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
    free(array);
    
}