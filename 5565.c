#include <stdio.h>
int main(void)
{
	int total,i;
	int array[9];
	
	scanf("%d",&total);
	for(i=0;i<9;i++)
	{
		scanf("%d",&array[i]);
		total=total-array[i];
	}
	
	printf("%d \n",total);
	
	return 0;
}
