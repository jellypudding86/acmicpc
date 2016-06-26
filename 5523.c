#include <stdio.h>
int main(void)
{
	int N,i,a,b,A=0,B=0;
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d %d",&a,&b);
		if(a>b)
			A++;
		else if(a<b)
			B++;
	}
	
	printf("%d %d \n",A,B);
}
