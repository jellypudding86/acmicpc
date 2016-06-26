#include <stdio.h>
int main(void)
{
	char array[101];
	int i,a,b,c,d;
	
	while(1)
	{	
		gets(array);
		if(feof(stdin)) break;
		
		a=0;
		b=0;
		c=0;
		d=0;
		
		for(i=0;array[i]!='\0';i++)
		{
			if(array[i]>=97&&array[i]<=122)
				a++;
			else if(array[i]>=65&&array[i]<=90)
				b++;
			else if(array[i]>=48&&array[i]<=57)
				c++;
			else
				d++;
		}
		
		printf("%d %d %d %d \n",a,b,c,d);
		
	}
	
	return 0;
}
