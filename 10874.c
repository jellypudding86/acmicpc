#include <stdio.h>
int array[101];
int answer[11];
int result[11];
int main(void)
{
	int N,i,j;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=0;j<10;j++)
		{
			result[j]=0;
		}
		for(j=0;j<10;j++)
		{
			scanf("%d",&answer[j]);
			if(answer[j]==((j)%5)+1)
			{
				result[j]=1;
			}
		}
		for(j=0;j<10;j++)
		{
			if(result[j]!=1) break;
		}
		if(j==10) printf("%d \n",i);
	}
	
	return 0;
	
}
