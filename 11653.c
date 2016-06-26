#include <stdio.h>
int main(void)
{
	int N,result,i=2;
	
	scanf("%d",&N);
	result=N;
	
	while(1)
	{
		if(i>result)
			break;
		else
		{
			if(N%i==0)
			{
				printf("%d \n",i);
				N=N/i;
			}
			else
			{
				i++;
			}
		}
	}
	
	return 0;
}
