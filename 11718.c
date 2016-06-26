#include <stdio.h>

int main(void)
{
	char ch[101];

	while(1)
	{
		gets(ch);
		if(feof(stdin))
			break;
		else
			puts(ch);
	}
	
	return 0;
}
