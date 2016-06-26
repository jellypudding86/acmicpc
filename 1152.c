#include <stdio.h>
#include <string.h>
int main(void)
{
	char* result;
	char word[1000001];
	int count=0;
	
	gets(word);
	result=strtok(word, " ");
	while(result!=NULL)
	{
		count++;
		result = strtok(NULL," ");
	}
	
	printf("%d",count);
	
	return 0;
}
