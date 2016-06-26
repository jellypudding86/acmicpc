#include <stdio.h>
int main(void)
{
	int array[7];
	int min, i, sum=0;
	int count=0;
	
	for(i=0;i<7;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]%2==1)
		{
			sum=sum+array[i];
			if(count==0)
				min=array[i];
			else if(array[i]<min)
				min=array[i];
			count ++;
		}
	}
	
	if(count==0)
		printf("-1 \n");
	else
	{
		printf("%d \n",sum);
		printf("%d \n",min);
	}

	return 0;
}
