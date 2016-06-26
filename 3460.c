#include <stdio.h>
#include <string.h>
int main(void)
{
	int T,N,i=0,length,sum=0,K=1,t,reverse;
	char array[40];

	scanf("%d",&T);
	for(t=0;t<T;t++)
	{
		scanf("%d",&N);
		for(i=0;N>0;i++)
		{
			array[i]=N%2;
			N=N/2;
		}		
		length=i;
		
		for(i=0;i<length;i++)
		{
			if(array[i]==1)
				printf("%d ",i);
		}
		
		printf("\n");
	}
	
	return 0;
}
