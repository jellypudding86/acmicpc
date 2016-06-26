#include <stdio.h>
#include <string.h>
int main(void)
{
	int N,i=0,length,sum=0,K=1;
	char array[40];
	
	scanf("%d",&N);
	for(i=0;N>0;i++)
	{
		array[i]=N%2;
		N=N/2;
	}

	length=i-1;
		
	for(i=length;i>=0;i--)
	{
		sum=sum+array[i]*K;
		K=K*2;
	}
	
	printf("%d \n",sum);
	
	return 0;
}
