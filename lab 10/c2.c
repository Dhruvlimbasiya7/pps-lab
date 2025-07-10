#include<stdio.h>
void main()
{
    int n,r,temp=0,sum=0;
    printf("enter a number=");
    scanf("%d",&n);
    
    while (n>0)
    {
        r=n%10;
        printf("%d\n",r);
        n=n/10;
        temp++;
    }

    if (temp==1)
    {
        printf("single digit is a armstrong number");
    }
    else if (temp == 2)
    {
        printf("double digit number is not a armstrong number");
    }
    
}