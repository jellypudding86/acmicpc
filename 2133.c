#include <stdio.h>
long long array[31];
int main(void)
{
	int N,i,j;
	scanf("%d",&N);
	array[0]=1;
	for(i=2;i<=N;i=i+2)
	{
		array[i]=array[i-2]*3;
		for(j=i-4;j>=0;j=j-2)
		{
			array[i]=array[i]+array[j]*2;
		}
	}
	
	printf("%lld",array[N]);
	
	return 0;
}
