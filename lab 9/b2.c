#include<stdio.h>
void main()
{
	
	float r,ans;
	printf("Enter Radius:");
	scanf("%f",&r);

    for (int i = 0; i < r ;)
    {
        ans=(4/3)*(3.1428)*(r*r*r);
		printf("Your Volume of Spehere is: %f",ans);
		printf("\nEnter Radius:");
		scanf("%f",&r);
    }
    
}
