#include <stdio.h>
int main(void)
{
	int num1,i;
	int num2[3];
	
	scanf("%d",&num1);
	scanf("%1d%1d%1d",&num2[0],&num2[1],&num2[2]);
	
	for(i=2;i>=0;i--)
	{
		printf("%d \n",num1*num2[i]);
	}
	
	printf("%d \n",num1*(num2[0]*100+num2[1]*10+num2[2]));
	
	return 0;
	
}
