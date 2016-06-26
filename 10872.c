#include <stdio.h>
int main(void)
{
	int N,i,result=1;
	
	scanf("%d",&N);
	for(i=1;i<=N;i++)
		result=result*i;
	printf("%d \n",result);
	
	return 0;
}
