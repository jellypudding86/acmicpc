#include <stdio.h>
int main(void)
{
	int T,N,M,i;
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&N,&M);
		printf("%d %d \n",2*M-N,M-2*M+N);
	}
	
	return 0;
}
