#include <stdio.h>
int main(void)
{
	int N,i,j;
	
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(i==N)
		{
			for(j=1;j<=2*N-1;j++)
				printf("*");
		}
		else
		{
			for(j=N-i;j>=1;j--)
				printf(" ");
			if(i==1) printf("*");
			else
			{
				printf("*");
				for(j=1;j<=2*(i-1)-1;j++)
					printf(" ");
				printf("*");		
			}
			printf("\n");
		}
	}
	
	return 0;
}
