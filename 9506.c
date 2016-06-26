#include <stdio.h>
int main(void)
{
	int N,i,sum,max;
	
	while(1)
	{
		sum=0;
		scanf("%d",&N);
		if(N==-1)
			break;
		for(i=1;i<N;i++)
		{
			if(N%i==0)
			{
				max=i;
				sum=sum+i;
			}
		}
		if(sum==N)
		{
			printf("%d = ",N);
			for(i=1;i<max;i++)
			{
				if(N%i==0)
					printf("%d + ",i);
			}
			printf("%d \n",max);
		}
		else
		{
			printf("%d is NOT perfect. \n",N);
		}
		
	}
	
	return 0;
}
