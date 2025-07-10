<<<<<<< HEAD
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

=======
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

>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
