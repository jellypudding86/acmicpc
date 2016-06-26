#include <stdio.h>
int main(void)
{
	int array[4];
	int S=0;
	int T=0;
	int i;
	
	for(i=0;i<4;i++)
	{
		scanf("%d",&array[i]);
		S=S+array[i];
	}
	
	for(i=0;i<4;i++)
	{
		scanf("%d",&array[i]);
		T=T+array[i];
	}
	
	if(S>T)
		printf("%d \n",S);
	else
		printf("%d \n",T);
		
	return 0;
}
