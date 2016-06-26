#include <stdio.h>
int main(void)
{
	int T,A,B,C;
	
	scanf("%d",&T);
	
	A=T / 300;
	B=(T-A*300) / 60;
	C=(T-A*300-B*60) / 10;	
	
	if(A*300+B*60+C*10==T)
		printf("%d %d %d",A,B,C);
	else
		printf("-1");
		
	return 0;
}
