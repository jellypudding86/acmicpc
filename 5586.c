#include <stdio.h>
#include <stdlib.h>
#define MAX 10001
int main(void)
{
	char *array;
	int i,J=0,I=0;
	
	array=malloc(sizeof(char)*MAX);
	
	scanf("%s",array);
	
	for(i=0;i<MAX;i++)
	{
		if(array[i]=='I')
		{
			if(array[i+1]=='O')
			{
				if(array[i+2]=='I')
					I++;
			}
		}
		if(array[i]=='J')
		{
			if(array[i+1]=='O')
			{
				if(array[i+2]=='I')
					J++;
			}
		}		
	}
	printf("%d \n",J);
	printf("%d \n",I);	
	
	return 0;
}
