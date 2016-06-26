#include <stdio.h>
int main(void)
{
	int N,i,count=0;
	int array[5];
	
	scanf("%d",&N);
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]%10==N)
			count++;
	}
	
	printf("%d \n",count);
	
	return 0;
}
