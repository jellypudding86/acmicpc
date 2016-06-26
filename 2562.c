#include <stdio.h>
int main(void)
{
	int array[9];
	int i, order, max=0;
	
	for(i=0;i<9;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]>max)
		{
			max=array[i];
			order=i+1;
		}
	}
	
	printf("%d \n",max);
	printf("%d \n",order);
	
	return 0;
}
