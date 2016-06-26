#include <stdio.h>
int main(void)
{
	char array[101];
	int i;
	
	scanf("%s",array);
	for(i=0;array[i]!='\0';i++)
	{
		switch(array[i])
		{
			case 'C':
				break;
			case 'A':
				break;				
			case 'M':
				break;				
			case 'B':
				break;				
			case 'R':
				break;				
			case 'I':
				break;				
			case 'D':
				break;				
			case 'G':
				break;				
			case 'E':
				break;				
			default:
				printf("%c",array[i]);
				break;									
		}
	}
	
	printf(" \n");
	
	return 0;
}
