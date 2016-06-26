#include <stdio.h>
int N,i;
long long array[100001]={1,3};
int main(void)
{
	scanf("%d",&N);
	for(i=2;i<=N;i++)
	{
		array[i]=(array[i-1]*2)+array[i-2];
		array[i]=array[i]%9901;
	}
	
	printf("%lld \n",array[N]);
	
	return 0;
}
