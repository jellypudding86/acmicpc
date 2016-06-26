#include <stdio.h>
long long k[68]={0};

long long koong(int n)
{
	int i;
	if(n<2)
		return 1;
	else if(n==2)
		return 2;
	else if(n==3)
		return 4;
	for(i=4;i<=n;i++)
		k[i]=k[i-1]+k[i-2]+k[i-3]+k[i-4];
	return k[n];
}

int main(void)
{
	int t,n,i;
	
	k[0]=1;
	k[1]=1;
	k[2]=2;
	k[3]=4;
	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		printf("%lld \n",koong(n));
	}
	
	return 0;
}
