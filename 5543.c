#include <stdio.h>
int main(void)
{
	int array[5];
	int i;
	int burger=3000;
	int drink=3000;
	for(i=0;i<3;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]<burger)
			burger=array[i];
	}
	for(i=3;i<5;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]<drink)
			drink=array[i];
	}
	
	printf("%d\n",burger+drink-50);
	
	return 0;
}
