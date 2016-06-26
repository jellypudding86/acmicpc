#include <stdio.h>
int array[301][301];

int main(void)
{
	int N,M,i,j,k,K,a,b,x,y;
	long long sum;
	scanf("%d %d",&N,&M);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=M;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}	
	scanf("%d",&K);
	for(i=0;i<K;i++)
	{
		sum=0;
		scanf("%d %d %d %d",&a,&b,&x,&y);
		for(j=a;j<=x;j++)
		{
			for(k=b;k<=y;k++)
			{
				sum=sum+array[j][k];
			}
		}
		printf("%lld \n",sum);		
	}
	
	return 0;
	
}
