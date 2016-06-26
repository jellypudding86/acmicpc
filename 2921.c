#include <stdio.h>
long long N;
int main(void)
{
	scanf("%lld",&N);
	N=N*(N+1)*(N+2)/2;
	printf("%lld \n",N);
	return 0;
}
