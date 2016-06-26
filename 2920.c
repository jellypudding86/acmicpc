#include <stdio.h>
#include <string.h>
int main(void)
{
	char array[17];
	int i;
	
	gets(array);
	
	if(strcmp(array,"1 2 3 4 5 6 7 8")==0)
		printf("ascending \n");

	else if(strcmp(array,"8 7 6 5 4 3 2 1")==0)
		printf("descending \n");
	else
		printf("mixed \n");
		
	return 0;
		
}
