#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N,i=0;
	double max=0, sum=0,tmp;
	int *array;
	
	scanf("%d",&N);
	array=malloc(N*sizeof(int));
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]>max)
			max=array[i];
	}
	
	for(i=0;i<N;i++)
	{
		tmp=array[i]/max*100;
		sum=sum+tmp;
	}

	max=sum/N;
	printf("%.02lf \n",max);

	return 0;
	
}
