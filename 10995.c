#include <stdio.h>
int main(void)
{
	int N,i,j;
	
	scanf("%d",&N);
	
	for(i=1;i<=N;i++)
	{
		if(i%2!=0)
		{
			for(j=1;j<=N;j++)
			{
				printf("* ");
			}
		}
		else
		{
			for(j=1;j<=N;j++)
			{
				printf(" *");
			}		
		}
		
		printf("\n");
	}
	
	return 0;
}
