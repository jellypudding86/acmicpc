#include <stdio.h>
int N,i;
int A[47];
int B[47];
int main(void)
{
	scanf("%d",&N);
	A[2]=1;
	B[1]=1;
	B[2]=1;
	for(i=3;i<=N;i++)
	{
		A[i]=A[i-1]+A[i-2];
		B[i]=B[i-1]+B[i-2];
	}	
	
	printf("%d %d \n",A[N],B[N]);
	
	return 0;
}
