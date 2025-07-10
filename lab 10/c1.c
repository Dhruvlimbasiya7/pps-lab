<<<<<<< HEAD
#include<stdio.h>

int main(){

    int j,i,count,n;
    printf("Enter max range: ");
    scanf("%d",&n);

    for(j = 1;j<=n;j++)
    {
        count = 0;

        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                count++;
                break;
             }
        }
        
        if(count==0 && j!= 1)
        {
            printf("%d ",j);
        }
    }

=======
#include<stdio.h>

int main(){

    int j,i,count,n;
    printf("Enter max range: ");
    scanf("%d",&n);

    for(j = 1;j<=n;j++)
    {
        count = 0;

        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                count++;
                break;
             }
        }
        
        if(count==0 && j!= 1)
        {
            printf("%d ",j);
        }
    }

>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}