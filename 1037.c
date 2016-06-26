#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int N, i;
	int max=0;
	int min=1000001;
	int *array;
	
	scanf("%d",&N);
	array=(int*)malloc(N*sizeof(int));
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]>max)
			max=array[i];
		if(array[i]<min)
			min=array[i];
	}

	printf("%lld \n",(long long)max*min);
	return 0;
}
