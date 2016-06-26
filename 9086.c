#include <stdio.h>
#include <string.h>
int main(void)
{
	int T,i;
	char array[1001];
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%s",array);
		printf("%c%c \n",array[0],array[strlen(array)-1]);
	}
	
	return 0;
}
