#include <stdio.h>
int main(void)
{
	int array[10];
	int i,max=0;
	int check[1000]={0};
	int mode, num=0;
	int sum=0;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]>max)
			max=array[i];
		sum=sum+array[i];
	}
		
	for(i=0;i<10;i++)
	{
		check[array[i]-1]++;
	}
	
	for(i=0;i<max;i++)
	{
		if(check[i]>num)
		{
			num=check[i];
			mode=i;
		}
	}

	printf("%d \n",sum/10);
	printf("%d \n",mode+1);
	
}
