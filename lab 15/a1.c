#include<stdio.h>
#include<string.h>
void main()
{
    char a[500] , temp=1;
    //scaning value
    printf("enter a number :");
    scanf("%s",&a);

    //adding value by 1
    for (int i = strlen(a); (temp && i) >0; i--)
    {
        if (a[i]==9)
        {
            a[i]=0;
        }
        else{
            a[i]+=1;
            temp=0;
        }
        
    }

    //checking for extra 1
    for (int i = strlen(a); i>=0; i--)
    {
        if (i!=0)
        {
            a[i]=a[i-1];
        }
        else{
            a[i]=1;
        }
    }

    for (int i = 0; i < strlen(a); i++)
    {
        printf("%s",a);
    }
    
    
}