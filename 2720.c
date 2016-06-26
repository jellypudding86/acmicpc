#include <stdio.h>
int main(void)
{
	int T,C,i;
	int Q,D,N,P;
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d",&C);
		Q=C/25;
		C=C-Q*25;
		D=C/10;
		C=C-D*10;
		N=C/5;
		C=C-N*5;
		P=C;
		
		printf("%d %d %d %d \n",Q,D,N,P);
	}
	
	return 0;
	
}
