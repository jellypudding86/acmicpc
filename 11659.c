#include <stdio.h>
int main(void)
{
	int N,M,i,a,b;
	int array[100001];
	int sum[100001];
	
	scanf("%d ",&N);
	scanf("%d ",&array[0]);
	sum[0]=array[0];
	for(i=1;i<N;i++)
	{
		scanf("%d ",&array[i]);
		sum[i]=sum[i-1]+array[i];
	}
	scanf("%d ",&M);		
	for(i=0;i<M;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d \n",sum[b-1]-sum[a-2]);
	}
	return 0;
}
