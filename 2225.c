#include <stdio.h>
long long array[201][201];
int N,K,i,j,k;
int main(void)
{
	array[0][0]=1LL;
	scanf("%d %d",&N,&K);
	for(i=1;i<=K;i++)
	{
		for(j=0;j<=N;j++)
		{
			for(k=0;k<=j;k++)
			{
				array[i][j] += array[i-1][j-k];
				array[i][j] %= 1000000000;
			}
		}
	}
	printf("%lld \n",array[K][N]);
	
	return 0;
}
