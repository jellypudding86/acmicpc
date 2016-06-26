#include <stdio.h>
int main(void)
{
	int input, i, min, sum=0;
	
	for(i=0;i<4;i++)
	{
		scanf("%d",&input);
		sum=sum+input;
	}
	
	min=sum/60;
	printf("%d \n",min);
	printf("%d \n",sum-(min*60));
	
	return 0;
}
