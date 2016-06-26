#include <stdio.h>
int main(void)
{
	int K,P,M,i,j,k,number,result;
	int sit[501];
	
	scanf("%d",&K);
	for(k=0;k<K;k++)
	{
		result=0;
		scanf("%d %d",&P,&M);
		for(i=1;i<=M;i++) sit[i]=0;	
		for(j=0;j<P;j++)
		{
			scanf("%d", &number);
			if(sit[number]==0) sit[number]++;
			else result++;
		}
		
		printf("%d \n", result);
	}
}
