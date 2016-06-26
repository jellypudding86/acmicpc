#include <stdio.h>
int main(void)
{
	int temp,i,j;
	int array[3];
	char order[4];
	
	scanf("%d %d %d",&array[0],&array[1],&array[2]);

	for(j=0;j<3;j++)
	{
		for(i=0;i<2;i++)
		{
			if(array[i]>array[i+1])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
	
	scanf("%s",order);
	
	switch(order[0])
	{
		case 'A':
			printf("%d ",array[0]);
			break;
		case 'B':
			printf("%d ",array[1]);
			break;
		case 'C':
			printf("%d ",array[2]);
			break;
	}
	
	switch(order[1])
	{
		case 'A':
			printf("%d ",array[0]);
			break;
		case 'B':
			printf("%d ",array[1]);
			break;
		case 'C':
			printf("%d ",array[2]);
			break;
	}	
	
	switch(order[2])
	{
		case 'A':
			printf("%d \n",array[0]);
			break;
		case 'B':
			printf("%d \n",array[1]);
			break;
		case 'C':
			printf("%d \n",array[2]);
			break;
	}	
	
	return 0;
	
}
