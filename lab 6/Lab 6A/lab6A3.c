<<<<<<< HEAD
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter n for Ending Series for 2*n:");
	scanf("%d",&n);
	n=n*2;
	i=1;
	while(i<=n)
	{
		if(i%2!=0)
		{
			printf("%d,",i);
			sum+=i;
		}
		i++;
	}
	printf("\nSum of That Odd Numbers are: %d",sum);
}
=======
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter n for Ending Series for 2*n:");
	scanf("%d",&n);
	n=n*2;
	i=1;
	while(i<=n)
	{
		if(i%2!=0)
		{
			printf("%d,",i);
			sum+=i;
		}
		i++;
	}
	printf("\nSum of That Odd Numbers are: %d",sum);
}
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
