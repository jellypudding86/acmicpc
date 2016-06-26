#include <stdio.h>
long long array[100001];
int main(void)
{
	int N,i,j;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		array[i]=i;
		for(j=1;j*j<=i;j++)
		{
			if(array[i]>array[i-j*j]+1)
				array[i]=array[i-j*j]+1;
		}
	}
	printf("%lld",array[N]);
	
	return 0;	
}
