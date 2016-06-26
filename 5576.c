#include <stdio.h>
int main(void)
{
	int W[10];
	int K[10];
	int i,j,temp;
	
	for(i=0;i<10;i++)
		scanf("%d",&W[i]);
	for(i=0;i<10;i++)
		scanf("%d",&K[i]);
		
	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			if(W[j]>W[j+1])
			{
				temp=W[j];
				W[j]=W[j+1];
				W[j+1]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			if(K[j]>K[j+1])
			{
				temp=K[j];
				K[j]=K[j+1];
				K[j+1]=temp;
			}
		}
	}
	
	printf("%d %d \n",W[9]+W[8]+W[7],K[9]+K[8]+K[7]);

	return 0;
}
