#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n , i = 5 ;

    printf("guess a number between 0 to 10 :");
    scanf("%d",&n);

    float randomnumber;
    randomnumber = (rand()*100)/10;
    printf("random number : %f\n", randomnumber);

    if (n==randomnumber)
    {
        printf("congratulations you guess it right");
    }
    else{
        printf("sorry better luck next time :");
    }
    
}