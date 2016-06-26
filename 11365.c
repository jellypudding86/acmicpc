#include <stdio.h>
#include <string.h>
int main(void)
{
	char array[1000000];
	int length,i;
	
	while(1)
	{
		gets(array);
		if(strcmp(array,"END")==0) break;
		
		length=strlen(array);
		
		for(i=length-1;i>=0;i--)
		{
			printf("%c",array[i]);
		}
		
		printf("\n");
	}
}
