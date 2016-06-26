#include <stdio.h>
int main(void)
{
	int array[10];
	int result[42];
	
	int i,check=0;
	
	for(i=0;i<42;i++)
		result[i]=0;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
		result[array[i]%42]=1;
	}
	
	for(i=0;i<42;i++)
	{
		if(result[i]==1)
			check++;
	}
	
	printf("%d \n",check);
	
	return 0;
	
}
