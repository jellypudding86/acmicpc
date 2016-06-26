#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int N,K,T,i,j,sum;
	int *array;
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		sum=0;
		scanf("%d %d",&N,&K);
		array=(int)malloc(sizeof(int)*N);
		for(j=0;j<N;j++)
		{
			scanf("%d",&array[j]);
		}		
		for(j=0;j<N;j++)
		{
			array[j]=array[j]/K;
			sum=sum+array[j];
		}
		printf("%d \n",sum);
		free(array);
	}
	
	return 0;
}
