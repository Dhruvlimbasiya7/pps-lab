#include<stdio.h>
#include<math.h>
void main ()
{
    int a , b ;

    printf("enter a number :");
    scanf("%d",&a);

    switch (a)
    {
    case 10:b = pow(10 , 2) ;
            printf("square of number :%d", b);
            break;
    
    case 9 : printf("enter different value \n");
    main ();
    break;

    case 2 : b = a*99 ;
        printf("%d" , b);
        break;

    case 3 : b = a*99 ;
        printf("%d" , b);
        break;

    default: printf("enter value : %d" , a);
        break;
    }
}