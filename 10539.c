#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int N,i;
	int *array;
	int *result;
	
	scanf("%d",&N);
	array=malloc(sizeof(int)*N);
	result=malloc(sizeof(int)*N);
	
	for(i=0;i<N;i++)
		scanf("%d",&array[i]);
		
	for(i=0;i<N;i++)
		result[i]=array[i]*(i+1);

	for(i=N-1;i>=1;i--)
		result[i]=result[i]-result[i-1];	
		
	for(i=0;i<N;i++)
		printf("%d ",result[i]);
		
	return 0;
}
