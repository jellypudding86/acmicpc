#include <stdio.h>
int main(void)
{
	int array[5];
	int i,sum=0;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
		sum=sum+(array[i]*array[i]);
	}
	
	printf("%d \n",sum%10);
	
	return 0;
}
