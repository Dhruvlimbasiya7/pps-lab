#include<stdio.h>
#include<math.h>
int main ()
{
    int a , i , p , flag = 0 ;

    //getting a number
    printf("enter a number :");
    scanf("%d",&a);

    // check for even or odd
    if (a%2==0)
    {
        // check zero or not
        if(a==0)
        {
            printf("number enter is in power of 2");
        }

        //check power mutilple of 2
        for (i=2 ; i< a ; i*=2)
        {
            if ( i == a)
            {
                printf("number enter is power of 2");
                flag = 1 ;
                break;
            }
            
        }

        // if not power of 2 and flag is not host
        if (flag == 0)
        {
            printf("number enter is not in power of 2");
        }
    }

    // number is odd
    else{
        printf("number enter is not power of 2");
    }
    
}