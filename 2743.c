#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 101

int main(void)
{
	char *a;
	a=(char*)malloc(MAX*sizeof(char));
	scanf("%s",a);
	
	printf("%d \n",strlen(a));
	
	return 0;
}
