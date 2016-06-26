#include <stdio.h>
int array[11];
int main(void)
{
	int T,i,n;
	array[1]=1;
	array[2]=2;
	array[3]=4;
	for(i=4;i<=10;i++)
	{
		array[i]=array[i-1]+array[i-2]+array[i-3];
	}	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d",&n);
		printf("%d \n",array[n]);
	}
}
