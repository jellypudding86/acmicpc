#include <stdio.h>
int main(void)
{
	int T,i,j,k,sum=0,min;
	int array[7];
	int even[7]={100,100,100,100,100,100,100};
	
	scanf("%d",&T);
	for(k=0;k<T;k++)
	{
		sum=0;
		min=100;
		j=0;
		for(i=0;i<7;i++)
		{
			even[i]=100;
			scanf("%d",&array[i]);
			if(array[i]%2==0)
			{
				even[j]=array[i];
				sum=sum+array[i];
				j++;
			}
		}

		for(i=0;i<7;i++)
		{
			if(even[i]<min)
				min=even[i];
		}
		
		printf("%d %d \n",sum,min);
	}
	
	return 0;
}
