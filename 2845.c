#include <stdio.h>
int main(void)
{
	int L,P,i;
	int array[5];
	
	scanf("%d %d",&L,&P);
	
	for(i=0;i<5;i++)
		scanf("%d",&array[i]);	
		
	for(i=0;i<5;i++)
		printf("%d ",array[i]-(L*P));
	
	printf("\n");	
	return 0;
}
