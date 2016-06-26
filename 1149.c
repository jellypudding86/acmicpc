#include <stdio.h>
int D[1002][3];
int A[1002][3];
int N,i,k;
int min(int a, int b)
{
	if(a>b)
		return b;
	else
		return a;
}

int main(void)
{
	scanf("%d",&N);
	for(k=1;k<=N;k++)
	{
		scanf("%d %d %d",&A[k][0],&A[k][1],&A[k][2]);
	}

	D[1][0]=A[1][0];
	D[1][1]=A[1][1];
	D[1][2]=A[1][2];
	
	for(i=2;i<=N;i++)
	{
		D[i][0]=min(D[i-1][1],D[i-1][2])+A[i][0];
		D[i][1]=min(D[i-1][0],D[i-1][2])+A[i][1];
		D[i][2]=min(D[i-1][0],D[i-1][1])+A[i][2];
	}
	
	printf("%d \n",min(min(D[N][0],D[N][1]),D[N][2]));
	
	return 0;
}
