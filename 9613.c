#include <stdio.h>
int array[101];
int sum;
int gcd(int a,int b)
{
	return b?gcd(b,a%b):a;
}

int main(void)
{
	int t,n,i,j,k;
	
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&array[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(k=i+1;k<n;k++)
			{
				sum=sum+gcd(array[i],array[k]);
			}
		}
		
		printf("%d \n",sum);
	}
	
	return 0;
}
