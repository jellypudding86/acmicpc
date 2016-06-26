#include <stdio.h>
int array[101][101];
int result[101][101];
int main(void)
{
	int N,M,i,j;
	scanf("%d %d",&N,&M);
	for(j=0;j<N;j++)
	{
		for(i=0;i<M;i++)
		{
			scanf("%d",&result[j][i]);
		}
	}
	for(j=0;j<N;j++)
	{
		for(i=0;i<M;i++)
		{
			scanf("%d",&array[j][i]);
			result[j][i]+=array[j][i];
		}
	}
	for(j=0;j<N;j++)
	{
		for(i=0;i<M;i++)
		{
			printf("%d ",result[j][i]);
		}
		printf("\n");
	}
	
	return 0;		
}
