#include <stdio.h>
int main(void)
{
	char array[101];
	int i=0;
	
	gets(array);
	while(array[i]!='\0')
	{
		printf("%c",array[i]);
		if(array[i]=='a'||array[i]=='e'||array[i]=='i'||array[i]=='o'||array[i]=='u')
			i=i+3;
		else i++;
	}
	
	return 0;
}
