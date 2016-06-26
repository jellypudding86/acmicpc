#include <stdio.h>
#include <string.h>
char array[1001];
int main(void)
{
	int i,length,check;
	char temp;
	
	while(1)
	{
		gets(array);
		if(strcmp(array,"*")==0)
			break;
		length=strlen(array);
		if(array[0]>=97)
				array[0]=array[0]-32;
		temp=array[0];
		check=0;
		for(i=1;i<length;i++)
		{
			if(array[i]==' ')
			{
				if(i==length-1) break;
				if(array[i+1]>=97)
					array[i+1]=array[i+1]-32;
				if(array[i+1]!=temp)
				{
					check=1;
				}
			}
		}
		if(check==0)
			printf("Y \n");
		else
			printf("N \n");
	}
	
	return 0;
}
