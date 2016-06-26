#include <stdio.h>
int main(void)
{
	int N,i;
	char *array;
	int sum=0;
	
	scanf("%d",&N);
	array=(int*)malloc(N*sizeof(int));
	
	getchar();
	for(i=0;i<N;i++)
	{
		array[i]=getchar()-48;
		sum=sum+array[i];
	}
	
	printf("%d \n",sum);
	return 0;
}
