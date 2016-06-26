#include <stdio.h>
int main(void)
{
	char array[101];
	int i;
	
	gets(array);
	for(i=0;array[i]!='\0';i++)
	{
		if(array[i]>64&&array[i]<78)
			array[i]=array[i]+13;
		else if(array[i]>77&&array[i]<91)
			array[i]=array[i]+13-26;
		else if(array[i]>96&&array[i]<110)
			array[i]=array[i]+13;
		else if(array[i]>109&&array[i]<123)
			array[i]=array[i]+13-26;	
	}
	
	for(i=0;array[i]!='\0';i++)
	{
		printf("%c",array[i]);
	}
	printf("\n");
	
	return 0;
}
