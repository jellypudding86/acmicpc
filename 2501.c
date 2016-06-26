#include <stdio.h>
int main(void)
{
	int N,K,i=0;
	int a=1;
	int *array;
	
	scanf("%d %d",&N,&K);
	array=(int*)malloc((N+1)*sizeof(int));
	while(a!=N+1)
	{
		if(N%a==0)
		{
			array[i]=a;	
			i++;
		}
		else
			array[i]=0;
		a++;
	}
	
	if(array[K-1]==0)
		printf("0 \n");
	else
		printf("%d \n",array[K-1]);

	return 0;
}
