#include <stdio.h>
int main(void)
{
	int N,M,i,j;
	int array[11];
	
	scanf("%d %d",&N,&M);
	
	for(j=0;j<N;j++)
	{
		for(i=0;i<M;i++)
		{
			scanf("%01d",&array[i]);
		}
		for(i=M-1;i>=0;i--)
		{
			printf("%01d",array[i]);
		}
		printf("\n");
	}
	
	return 0;
}
