#include <stdio.h>
long long array[1001][10];
int main(void)
{
	int N,i,j,k;
	long long result=0;
	scanf("%d",&N);
	for(i=0;i<10;i++)
	{
		array[1][i]=1;
	}
	for(i=2;i<=N;i++)
	{
		for(j=0;j<10;j++)
		{	
			for(k=0;k<=j;k++)
			{
				array[i][j]=array[i][j]+array[i-1][k];
				array[i][j]=array[i][j]%10007;
			}
			
		}
	}
	
	for(i=0;i<10;i++)
	{
		result=result+array[N][i];
	}
	
	result=result%10007;
	
	printf("%llu \n",result);
	
	return 0;
}
