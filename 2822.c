#include <stdio.h>
int main(void)
{
	int array[8];
	int sort[8];
	int i,j,temp,score;
	
	for(i=0;i<8;i++)
	{
		scanf("%d",&array[i]);
		sort[i]=array[i];
	}
	
	for(j=0;j<8;j++)
	{
		for(i=0;i<7;i++)
		{
			if(sort[i]>sort[i+1])
			{
				temp=sort[i];
				sort[i]=sort[i+1];
				sort[i+1]=temp;
			}
		}
	}
	
	score=sort[7]+sort[6]+sort[5]+sort[4]+sort[3];
	
	printf("%d \n",score);
	
	for(i=0;i<8;i++)
	{
		if(array[i]==sort[7]||array[i]==sort[6]||array[i]==sort[5]||array[i]==sort[4]||array[i]==sort[3])
		{
			printf("%d ",i+1);
		}
	}
	
	return 0;
}
