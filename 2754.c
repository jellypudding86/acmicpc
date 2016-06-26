#include <stdio.h>
#include <string.h>
int main(void)
{
	char array[3];
	
	scanf("%s",array);
	
	if(array[0]=='A')
	{
		if(array[1]=='+')
			printf("4.3 \n");
		else if(array[1]=='0')
			printf("4.0 \n");
		else
			printf("3.7 \n");
	}
	
	else if(array[0]=='B')
	{
		if(array[1]=='+')
			printf("3.3 \n");
		else if(array[1]=='0')
			printf("3.0 \n");
		else
			printf("2.7 \n");
	}
	
	else if(array[0]=='C')
	{
		if(array[1]=='+')
			printf("2.3 \n");
		else if(array[1]=='0')
			printf("2.0 \n");
		else
			printf("1.7 \n");
	}
	
	else if(array[0]=='D')
	{
		if(array[1]=='+')
			printf("1.3 \n");
		else if(array[1]=='0')
			printf("1.0 \n");
		else
			printf("0.7 \n");
	}
	
	else
		printf("0.0 \n");
		
	return 0;
									
}
