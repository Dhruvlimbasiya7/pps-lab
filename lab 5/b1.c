#include<stdio.h>
void main ()
{
    int b ;

    printf("enter 1(for factorial) , 2 (for prime) , 3 (for odd or even) , 4 (for exit) : ");
    scanf("%d",&b);

    switch (b)
    {
    case 1 : 
        int num,factorial=1,i=1;
        printf("enter integer :");
        scanf("%d",&num);
        while(i<=num)
        {
            factorial=factorial*i;
            i++;
        }
        printf("%d\n",factorial);
        main();
    case 2 :
        int i=2,n,flag=0;
        printf("enter a number =");
        scanf("%d",&n);
        while (i<n)
        {
            if (n%i==0)
            {
                flag=1;
                break;
            }
            i++;
        }
        if (flag==0)
        {
        printf("%d is a prime number",n);
        }
        else{
        printf("%d is not a prime number",n);
        }
        main();
    case 3 :
        int n;
        printf("enter a number =");
        scanf("%d",&n);
        if (n%2==0)
        {
            printf("number is even");
        }
        else{
            printf("number is odd");
        }
        main();
    case 4 :
        break;

    default:
        printf("invalid input");
        break;
    }
}