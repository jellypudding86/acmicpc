#include <stdio.h>
int main(void)
{
	int H,M;
	
	scanf("%d %d",&H,&M);

	if(H==0)
	{
		if(M<45)
			printf("%d %d \n",23,15+M);
	
		else
			printf("%d %d \n",H,M-45);
	}

	else
	{
		if(M<45)
			printf("%d %d \n",H-1,15+M);
	
		else
			printf("%d %d \n",H,M-45);
	}
	return 0;
}
