#include <stdio.h>
int factorial(int N)
{
	int result=1,i;
	
	for(i=1;i<=N;i++)
		result=result*i;
	
	return result;
}

int main(void)
{
	int N,K,result;
	
	scanf("%d %d",&N,&K);
	
	if(K<0||K>N) 
	{
		printf("0");
	}
	else
	{
		result=factorial(N)/(factorial(K)*factorial(N-K));
		printf("%d",result);
	}
	
	return 0;
}
