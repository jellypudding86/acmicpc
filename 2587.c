#include <stdio.h>
int main(void)
{
	int array[5];
	int i,j,temp,sum=0;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
		sum=sum+array[i];
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	
	printf("%d \n",sum/5);
	printf("%d \n",array[2]);
}
