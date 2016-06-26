#include <stdio.h>
int main(void)
{
	int array[4]={0,1,0,0};
	int temp,M,i,a,b;
	
	scanf("%d",&M);
	for(i=0;i<M;i++)
	{
		scanf("%d %d",&a,&b);
		temp=array[a];
		array[a]=array[b];
		array[b]=temp;
	}
	
	if(array[1]==1)
		printf("1 \n");
	else if(array[2]==1)
		printf("2 \n");
	else if(array[3]==1)
		printf("3 \n");
	else
		printf("-1 \n");
		
	return 0;
}
