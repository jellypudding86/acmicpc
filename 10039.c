#include <stdio.h>
int main(void)
{
	int array[5];
	int i,sum=0;;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]<40)
			array[i]=40;
		sum=sum+array[i];
	}
	
	printf("%d \n",sum/5);
	
	return 0;
}
