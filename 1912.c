#include <stdio.h>
long long array[100002];
long long sum[100002];
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
	long long result;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&array[i]);
	}
	sum[1]=array[1];
	result=sum[1];
	for(i=2;i<=n;i++)
	{
		sum[i]=max(sum[i-1]+array[i],array[i]);	
		if(sum[i]>result)
			result=sum[i];
	}
	
	printf("%lld",result);
	
	return 0;
		
}
