#include <stdio.h>
int main(void)
{
	int array[6];
	int i,sum=0,min=101;
	
	for(i=0;i<6;i++)
	{
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<4;i++)
	{
		if(min>array[i]) min=array[i];
	}
	
	if(array[4]>array[5])
		sum=array[0]+array[1]+array[2]+array[3]-min+array[4];
	else
		sum=array[0]+array[1]+array[2]+array[3]-min+array[5];
	
	printf("%d",sum);
	
	return 0;		
	
	
}
