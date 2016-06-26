#include <stdio.h>
int main(void)
{
	int T,N,result,k,i,count;
	
	scanf("%d",&T);
	for(k=0;k<T;k++)
	{
		scanf("%d",&N);
		result=N;
		
		i=2;
		while(1)
		{
			if(i>result)
				break;
			else
			{
				count=0;
				while(N%i==0)
				{
					count++;
					N=N/i;
				}
				if(count>0)
				{
					printf("%d %d\n",i,count);
				}
				i++;
			}
		}
	}
	return 0;
}
