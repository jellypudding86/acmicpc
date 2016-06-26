#include <stdio.h>
int main(void)
{
	char array[101];
	int i,count=0;
	
	scanf("%s",array);
	for(i=0;array[i]!='\0';i++)
	{
		switch(array[i])
		{
			case 'a':
				count++;
				break;
			case 'e':
				count++;
				break;
			case 'i':
				count++;
				break;
			case 'o':
				count++;
				break;	
			case 'u':
				count++;
				break;
			default:
				break;		
		}
	}
	
	printf("%d \n",count);
	
	return 0;
}
