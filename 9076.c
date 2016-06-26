#include <stdio.h>
int main(void)
{
	int T,i,j,k,temp;
	int array[5];
		
	scanf("%d",&T);
	for(j=0;j<T;j++)
	{	
		for(i=0;i<5;i++)	
		{
			scanf("%d",&array[i]);
		}
		for(k=0;k<5;k++)
		{
			for(i=0;i<4;i++)
			{
				if(array[i]>array[i+1])
				{
					temp=array[i];
					array[i]=array[i+1];
					array[i+1]=temp;
				}
			}
		}		
		if(array[3]-array[1]>3)
			printf("KIN \n");
		else
			printf("%d \n",array[1]+array[2]+array[3]);
	}
	
	return 0;
	
}
