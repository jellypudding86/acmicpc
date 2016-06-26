#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N,v,i,count=0;
	int *array;
	
	scanf("%d",&N);
	array=(int*)malloc(N*sizeof(int));
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
	}
	scanf("%d",&v);
	
	for(i=0;i<N;i++)
	{
		if(array[i]==v)
			count++;
	}
	
	printf("%d \n",count);
	
	return 0;
}
