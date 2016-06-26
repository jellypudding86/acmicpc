#include <stdio.h>
int main(void)
{
	int array[5];
	int i,j,k,temp,change;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			change=0;
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
				change=1;
			}
			if(change==1)
			{
				for(k=0;k<5;k++)
					printf("%d ",array[k]);
				printf("\n");
			}
		}

		
	}
	
	return 0;
}
