#include <stdio.h>
int main(void)
{
	int N,input,i;
	long long result = 0;
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&input);
		result=result+input;
	}
	
	printf("%lld",result-N+1);
	
	return 0;
}
