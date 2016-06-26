#include <stdio.h>
long long array[302];
long long sum[302];
long long max(long long a,long long b)
{
	if(a>b)
		return a;
	else
		return b;
}

int main(void)
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&array[i]);	
	}
	sum[1]=array[1];
	sum[2]=array[1]+array[2];

	for(i=3;i<=n;i++)
	{
			sum[i]=max(sum[i-2]+array[i],sum[i-3]+array[i-1]+array[i]);
	}	
	printf("%lld",sum[n]);
	
	return 0;
}
