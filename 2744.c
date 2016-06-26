#include <stdio.h>
int main(void)
{
	char array[101];
	int i;
	
	scanf("%s",array);
	
	for(i=0;array[i]!='\0';i++)
	{
		if(array[i]>95)
			array[i]=array[i]-32;
		else
			array[i]=array[i]+32;
	}
	
	printf("%s \n",array);
	
	return 0;
}
