#include <stdio.h>
int main(void)
{
	int T,N,i,j;
	int *num;
	int sum=0;
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d",&N);
		num=(int*)malloc(N*sizeof(int));
		sum=0;
		for(j=0;j<N;j++)
		{
			scanf("%d",&num[j]);
			sum=sum+num[j];
		}
		printf("%d\n",sum);
	}
	
	return 0;
}
