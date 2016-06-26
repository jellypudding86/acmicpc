#include <stdio.h>
int main(void)
{
	char array[101][101];
	int N,i,j,statue;
	
	scanf("%d",&N);
	getchar();
	for(j=0;j<N;j++)
	{
		for(i=0;i<N;i++)
			scanf("%c",&array[j][i]);
		getchar();	
	}
	
	scanf("%d",&statue);
	
	if(statue==1)
	{
		for(j=0;j<N;j++)
		{
			for(i=0;i<N;i++)
				printf("%c",array[j][i]);
			printf("\n");	
		}		
	}
	
	else if(statue==2)
	{
		for(j=0;j<N;j++)
		{
			for(i=N-1;i>=0;i--)
				printf("%c",array[j][i]);
			printf("\n");	
		}		
	}	
	
	else
	{
		for(j=N-1;j>=0;j--)
		{
			for(i=0;i<N;i++)
				printf("%c",array[j][i]);
			printf("\n");	
		}		
	}	
	
	return 0;
}
