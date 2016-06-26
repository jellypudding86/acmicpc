#include <stdio.h>
long long score[100001][2];
long long array[100001][3];
long long result =0;
long long max (long long a, long long b)
{
	if(a>b)
		return a;
	else
		return b;
}
int main(void)
{
	int T,n,i,j;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d",&n);
		for(j=1;j<=n;j++)
			scanf("%lld",&score[j][0]);
		for(j=1;j<=n;j++)
			scanf("%lld",&score[j][1]);
			
		array[0][0]=0;
		array[0][1]=0;
		array[0][2]=0;
		
		for(j=1;j<=n;j++)
		{
			array[j][0]=max(array[j-1][0],max(array[j-1][1],array[j-1][2]));
			array[j][1]=max(array[j-1][0],array[j-1][2])+score[j][0];
			array[j][2]=max(array[j-1][0],array[j-1][1])+score[j][1];
		}
		
		result =0;
		
		for(j=1;j<=n;j++)
		{
			result=max(max(result,array[j][0]),max(array[j][1],array[j][2]));
		}
				
		printf("%lld \n",result);			
	}
	
	return 0;
}
