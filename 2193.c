#include <stdio.h>
long long array[91];
int main(void)
{
	int N,i;
	scanf("%d",&N);
	
	array[0]=0;
	array[1]=1;
	array[2]=1;
	
	for(i=3;i<=N;i++)
	{
		array[i]=array[i-1]+array[i-2];
	}
	
	printf("%llu \n",array[N]);
	
	return 0;
}
