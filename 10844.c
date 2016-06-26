#include <stdio.h>
long long array[101][10];
long long divide=1000000000;

int main(void)
{
	int N,i,j;
	long long temp=0;
	scanf("%d",&N);
	
	for(i=1;i<=9;i++)
	{
		array[1][i]=1;
	}
	
	for(i=2;i<=N;i++)
	{
		for(j=0;j<=9;j++)
		{
			array[i][j]=0;
			if(j-1>=0)
				array[i][j]=array[i][j]+array[i-1][j-1];
			if(j+1<=9)
				array[i][j]=array[i][j]+array[i-1][j+1];
			
		array[i][j] = array[i][j]%divide;
		}
	}
	
	for(i=0;i<=9;i++)
	{
		temp=temp+array[N][i];
	}
	
	temp=temp%divide;
	printf("%llu \n",temp);
	
	return 0;
}
