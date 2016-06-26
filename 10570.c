#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int N,V,i,j,max,min,index;
	int *array;
	int num[1001];
		
	scanf("%d",&N);
	for(j=0;j<N;j++)
	{
		max=0;
		index=0;
		min=1001;
		
		for(i=0;i<1001;i++) 
			num[i]=0;
				
		scanf("%d",&V); 
		array=malloc(sizeof(int)*V); 
		
		for(i=0;i<V;i++) 
		{
			scanf("%d",&array[i]);
			num[array[i]]++; 
		}
		
		for(i=1000;i>=0;i--)
		{
			if(num[i]>=max)
			{
				max=num[i];
				index=i;
			}
		}
		
		printf("%d \n",index);
		
		free(array);
	}
	
	return 0;
}
