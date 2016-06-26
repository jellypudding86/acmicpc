#include <stdio.h>
int array[1001];
int result[1001];
int main(void)
{
	int N,i,j,temp;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
	}

	for(i=0;i<N;i++)
	{
		result[i]=array[i];
		for(j=0;j<i;j++)
		{
			if(array[j]<array[i]&&result[i]<result[j]+array[i])
				result[i]=result[j]+array[i];
		}
	}

	temp=result[0];

	for(i=1;i<N;i++)
	{
		if(result[i]>temp)
			temp=result[i];
	}
	
	printf("%d \n",temp);
	
	return 0;
}
