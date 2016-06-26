#include <stdio.h>
int main(void)
{
	int N,i,num,count=0;
	int array[101];
	
	for(i=0;i<101;i++)
		array[i]=0;
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&num);
		if(array[num]==0)
			array[num]=1;
		else
			count++;
	}
	
	printf("%d \n",count);
	
	return 0;
}
