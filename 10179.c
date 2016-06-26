#include <stdio.h>
int main(void)
{
	long long A,B,N,i,P;
	char c;
	
	scanf("%lld",&N);
	for(i=0;i<N;i++)
	{
		scanf("%lld%c%lld",&A,&c,&B);
		P=A*100+B;
		P-=P/5.0;
		printf("$%lld.%02lld \n",P/100,P%100);
	}
	
	return 0;
}
