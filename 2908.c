#include <stdio.h>
int main(void)
{
	int array1[3];
	int array2[3];
	
	scanf("%1d%1d%1d",&array1[0],&array1[1],&array1[2]);
	scanf("%1d%1d%1d",&array2[0],&array2[1],&array2[2]);
	
	if((array1[2]*100+array1[1]*10+array1[0])>(array2[2]*100+array2[1]*10+array2[0]))
		printf("%d%d%d \n",array1[2],array1[1],array1[0]);
	else
		printf("%d%d%d \n",array2[2],array2[1],array2[0]);	
		
	return 0;
}
