#include<stdio.h>
void main()
{
	int i,n;
	printf("How many floating values do you want:");
	scanf("%d",&n);
	
    float a[n],sum=0.0,avg;
	for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]:",i);
		scanf("%f",&a[i]);
		sum+=a[i];
		i++;
    }
	avg=(float)sum/n;
	printf("Average of %d floating number are: %f",n,avg);
}

