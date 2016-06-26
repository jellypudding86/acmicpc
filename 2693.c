#include <stdio.h>
int main(void)
{
	int T,i,j,k,temp;
	int array[10];
	
	scanf("%d",&T);
	for(j=0;j<T;j++)
	{
		for(i=0;i<10;i++)
		{
			scanf("%d",&array[i]);
		}
		for(k=0;k<10;k++)
		{
			for(i=0;i<9;i++)
			{
				if(array[i]<array[i+1])
				{
					temp=array[i];
					array[i]=array[i+1];
					array[i+1]=temp;
				}
			}
		}
		printf("%d \n",array[2]);
	}
	
	return 0;
}
