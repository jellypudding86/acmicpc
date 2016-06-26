#include <stdio.h>
long long drink[10002];
long long array[10002];
long long temp;
long long max (long long a, long long b, long long c)
{
	if (a>b)
		temp=a;
	else	
		temp=b;
	if (temp>c)
		return temp;
	else
		return c;
	
}

int main(void)
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&drink[i]);
	}
	
	array[1]=drink[1];
	array[2]=drink[1]+drink[2];
	
	for(i=3;i<=n;i++)
	{
		array[i]=max(array[i-1],array[i-2]+drink[i],array[i-3]+drink[i-1]+drink[i]);
	}
	
	printf("%lld \n",array[n]);
	
	return 0;
}
