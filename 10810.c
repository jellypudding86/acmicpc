#include <stdio.h>
int array[102];
int main(void)
{
	int N,M,i,j,begin,end,num;
	scanf("%d %d",&N,&M);
	for(i=0;i<M;i++)
	{
		scanf("%d %d %d",&begin,&end,&num);
		for(j=begin;j<=end;j++)
		{
			array[j]=num;
		}
	}
	
	for(i=1;i<=N;i++)
	{
		printf("%d ",array[i]);
	}
	
	return 0;
}

