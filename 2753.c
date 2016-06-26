#include <stdio.h>
int main(void)
{
	int Y;
	
	scanf("%d",&Y);
	
	if(Y%4==0)
	{
		if(Y%100!=0)
			printf("1 \n");
		else if(Y%400==0)
			printf("1 \n");
		else
			printf("0 \n");
	}
	
	else
		printf("0 \n");
	
	return 0;
}
