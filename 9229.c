#include <stdio.h>
#include <string.h>
char array[21];
char string[21];
int main(void)
{
	int length,change,i,check,count;
	while(1)
	{
		scanf("%s",array);
		if(array[0]=='#') break;
		count=0;
		check=0;		
		length=strlen(array);
		while(1)
		{
			change=0;
			scanf("%s",string);
			if(string[0]=='#') break;
			if(length!=strlen(string))
				check=1;
			for(i=0;i<length;i++)
			{
				if(array[i]!=string[i])
					change++;
			}
			if(change!=1)
			{
				check=1;
			}
			strcpy(array,string);
			count++;
			
		}
		
		if(check==0) printf("Correct \n");
		else printf("Incorrect \n");
		
	}
	
	return 0;
}
