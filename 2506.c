#include <stdio.h>
int main(void)
{
	int i,N,sum=0,check=0;
	int array[101];
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<N;i++)
	{
		if(array[i]==1)
		{
			sum=sum+check+1;
			check++;
		}
		else
			check=0;
	}
	
	printf("%d",sum);
	
	return 0;
}
