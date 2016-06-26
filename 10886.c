#include <stdio.h>
int main(void)
{
	int N,i,vote;
	int cute=0;
	int notcute=0;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&vote);
		if(vote==1)
			cute++;
		else
			notcute++;
	}
	
	if(cute>notcute)
		printf("Junhee is cute! \n");
	else
		printf("Junhee is not cute! \n");
		
	return 0;
	
}
