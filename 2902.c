#include <stdio.h>
int main(void)
{
	char array[101];
	int i;
	
	scanf("%s",array);
	printf("%c",array[0]);
	for(i=0;array[i]!='\0';i++)
	{
		if(array[i]==45)
			printf("%c",array[i+1]);
	}
	
	return 0;
	
}
