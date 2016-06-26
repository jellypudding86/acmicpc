#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int N,M,i,temp,a,b;
	int *basket;
	
	scanf("%d %d",&N,&M);
	
	basket=(int)malloc(sizeof(int)*N);
	for(i=0;i<=N;i++)
		basket[i]=i;
	
	for(i=0;i<M;i++)
	{
		scanf("%d %d",&a,&b);
		temp=basket[a];
		basket[a]=basket[b];
		basket[b]=temp;
	}
	
	for(i=1;i<=N;i++)
		printf("%d ",basket[i]);
	
	printf("\n");
	
	return 0;		
}
