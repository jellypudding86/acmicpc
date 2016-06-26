#include <stdio.h>
int main(void)
{
	int i,j,temp=0;
	int array[4];
	int score[4];
	int order,max=0;
	for(i=0;i<5;i++)
	{
		temp=0;
		for(j=0;j<4;j++)
		{
		scanf("%d",&array[j]);
		temp=temp+array[j];
		}
		score[i]=temp;
	}
	
	for(i=0;i<5;i++)
	{
		if(score[i]>max)
		{
			max=score[i];
			order=i;
		}
	}
	printf("%d %d\n", order+1,max);
	
	return 0;
}
