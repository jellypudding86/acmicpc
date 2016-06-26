#include <stdio.h>
int main(void)
{
	int array[4]={0};
	int i,j, count=0;
	int result[3];
	
	for(j=0;j<3;j++)
	{
		count=0;
		for(i=0;i<4;i++)
		{
			scanf("%d",&array[i]);
			if(array[i]==1)
				count++;
		}
		switch(count)
		{
			case 0:
				printf("D \n");
				break;
			case 1:
				printf("C \n");	
				break;	
			case 2:
				printf("B \n");
				break;
			case 3: 	
				printf("A \n");
				break;	
			case 4:
				printf("E \n");
				break;		
		}
				
	}
	
	return 0;
}
