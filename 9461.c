#include <stdio.h>
int T,N,i;
long long array[101]={0,1,1,1,2,2,3,4,5,7,9};
int main(void)
{
	for(i=10;i<=100;i++)
		array[i]=array[i-1]+array[i-5];
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d",&N);
		printf("%lld \n",array[N]);
	}
	
	return 0;
}
