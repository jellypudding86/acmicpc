#include <stdio.h>
int A[501][501];
int D[501][501];
int N,i,j,temp=0;
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int main(void)
{
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
		
	D[1][1]=A[1][1];

	for(i=2;i<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			D[i][j]=max(D[i-1][j-1],D[i-1][j])+A[i][j];
		}
	}

	for(i=1;i<=N;i++)
	{
		if(D[N][i]>temp)
			temp=D[N][i];
	}
	
	printf("%d \n",temp);
	
	return 0;
}
