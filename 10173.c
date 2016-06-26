#include <stdio.h>
#include <string.h>
char array[81];
int length,i;
char *ret;
int main(void)
{
	while(1)
	{
		gets(array);
		if(strcmp(array,"EOI")==0)
			break;
		length=strlen(array);
		for(i=0;i<length;i++)
		{
			if(array[i]>=97)
				array[i]=array[i]-32;
		}
		ret=strstr(array,"NEMO");
		if(ret==NULL)
			printf("Missing \n");
		else
			printf("Found \n");
	}
	
	return 0;
}
