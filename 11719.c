#include <stdio.h>

int main(void)
{
	char ch[101];
	int count=1;
	
	while(gets(ch))
	{
		puts(ch);
		count++;		
	}
	
	return 0;
}
