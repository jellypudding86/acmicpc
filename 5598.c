#include <stdio.h>
int main(void)
{
	char array[1001];
	int i;
	
	scanf("%s",array);
	for(i=0;array[i]!='\0';i++)
	{
		if(array[i]<=67)
			array[i]=array[i]-3+26;
		else
			array[i]=array[i]-3;
	}
	printf("%s",array);
	
	return 0;
}
