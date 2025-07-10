#include<stdio.h>
void main()
{
    int a[10] , b[10] , flag =0 ;

    for (int i = 0; i < 10; i++)
    {
        printf("entre value of a[%d]:",i+1);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("entre value of b[%d]:",i+1);
        scanf("%d",&b[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i]!=b[i])
        {
            printf("0");
            break;
        }
        else{
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("1");
    }
    
    
}