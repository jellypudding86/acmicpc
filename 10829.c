#include<stdio.h>
#include <stdlib.h>
int main(void)
{
	long long N;
	int i=0,length;
	int array[51];
	
	for(i=0;i<51;i++)
		array[i]=2;
	
	scanf("%lld",&N);
	
	i=0;
	while(1)
	{
		array[i]=N%2;
		N=N/2;
		if(N==0)
			break;
		i++;
	}
	
	for(i=0;i<51;i++)
	{
		if(array[i]==2)
		{
			length=i;
			break;
		}
	}

	for(i=length-1;i>=0;i--)
		printf("%d",array[i]);
	
	return 0;
	
}
