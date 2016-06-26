#include <stdio.h>
int array[1001];
int result[1001];
int result2[1001];
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
		result[i]=1;
		for(j=0;j<i;j++)
		{
			if(array[j]<array[i]&&result[i]<result[j]+1)
				result[i]=result[j]+1;
		}	
	}
	
	for(i=N-1;i>=0;i--)
	{
		result2[i]=1;
		for(j=i+1;j<N;j++)
		{
			if(array[j]<array[i]&&result2[i]<result2[j]+1)
				result2[i]=result2[j]+1;			
		}
	}
	
	temp=result[0];

	for(i=0;i<N;i++)
	{
		if(result[i]+result2[i]-1>temp)
			temp=result[i]+result2[i]-1;
	}
	
	printf("%d \n",temp);
	
	return 0;
}
