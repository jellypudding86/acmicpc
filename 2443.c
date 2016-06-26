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
	
	return 0;
}
