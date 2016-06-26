#include <stdio.h>
int main(void)
{
	char array[10];
	char ch;
	int i=0;
	
	
	ch=getchar();
	while((ch!='\n')&&(i<10))
	{
		array[i]=ch;
		i++;
		ch=getchar();
	}
	printf("%s",array);
	
	
/*	while(1)
	{
		for (i=0;i<10;i++)
		{
			array[0]=getchar();
		}
	printf("%s\n",array);
	}*/
	return 0;
}
