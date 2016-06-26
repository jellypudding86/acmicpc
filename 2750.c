#include <stdio.h>
int main(void)
{
	int N,i,j,temp;
	int* array;
	
	scanf("%d",&N);
	array=(int*)malloc(N*sizeof(int));
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(j=1;j<N;j++)
	{
		for(i=0;i<N-1;i++)
		{
			if(array[i]>array[i+1])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
	
	for(i=0;i<N;i++)
	{
		printf("%d \n",array[i]);
	}
	
	return 0;
}
