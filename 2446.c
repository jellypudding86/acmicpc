#include<stdio.h>
int main(void)
{
	int N,i,j,total;
	
	scanf("%d",&N);
	total=2*N-1;
	
	
	for(i=N;i>0;i--)
	{
		for(j=1;j<=N-i;j++)
			printf(" ");		
		for(j=2*i-1;j>0;j--)
			printf("*");

		printf("\n");
	}
	for(i=2;i<N+1;i++)
	{
		for(j=1;j<=(total-(2*i-1))/2;j++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
