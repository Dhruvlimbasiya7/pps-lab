#include<stdio.h>
void main()
{
    int a ;

    printf("enter starting value :");
    scanf("%d",&a);

    int b ;

    printf("enter ending value :");
    scanf("%d",&b);

    // if (a>b)
    // {
    //     printf("invalid input");
    //     main();
    // }

    int c ;
    printf("how many number you want to enter :");
    scanf("%d",&c);

    int array[c];
    int i;
    for (i = 0; i < c; i++)
    {
        printf("enter value of %d:",i+1);
        scanf("%d",&array[i]);
    }

        for ( i = 0; i < c; i++)
        {
            if (array[i]>=a && array[i]<=b)
            {
               printf("%d\t",array[i]);
            }
        }
    
}