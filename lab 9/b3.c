#include<stdio.h>
void main()
{
	int i=0,j=1,ans,n;
	printf("Enter n, in which you want to teminate fibbonacci series:");
	scanf("%d",&n);
	if(n==1)
		{
			printf("0");
		}
		else if(n==2)
		{
			printf("0,1");
		}
		else if(n>2)
		{
			printf("0,");
			printf("1,");
			for( int k=3 ;k<=n ; k++)
            {
				ans=i+j;
				printf("%d,",ans);
				i=j;
				j=ans;
			}

		}		
		else{
			printf("Invalid.");
		}
}
