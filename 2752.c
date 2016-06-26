#include <stdio.h>
int main(void)
{
	int i,j,temp;
	int array[3];
	scanf("%d %d %d",&array[0],&array[1],&array[2]);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	
	printf("%d %d %d \n",array[0],array[1],array[2]);
	
	return 0;
	
}
