#include <stdio.h>

int main(void)
{
	long long N,i;
	long long array[91];
	
	array[0]=0;
	array[1]=1;
	
	for(i=2;i<91;i++)
	{
		array[i]=array[i-1]+array[i-2];
	}
	
	scanf("%lld",&N);
	
	printf("%lld \n",array[N]);
	
	return 0;
	
}
