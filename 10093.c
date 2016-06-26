#include <stdio.h>
long long A,B,temp,i;
int main(void)
{	
	scanf("%lld %lld",&A,&B);

	if(A>B)
	{
		temp=A;
		A=B;
		B=temp;
	}
		
	printf("%lld \n",B-A?B-A-1:0);

	for(i=A+1;i<B;i++)
		printf("%lld ",i);

	return 0;
}
