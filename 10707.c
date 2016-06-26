#include <stdio.h>
int main(void)
{
	long long A,B,C,D,P;
	long long X,Y;
	
	scanf("%lld",&A);
	scanf("%lld",&B);
	scanf("%lld",&C);
	scanf("%lld",&D);
	scanf("%lld",&P);
	
	X=P*A;
	if(P<=C)
		Y=B;
	else
		Y=B+D*(P-C);
		
	if(X>Y)
		printf("%lld ",Y);
	else
		printf("%lld ",X);
		
	return 0;	
}
