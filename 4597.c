#include <stdio.h>
#include <string.h>
char array[32];
int main(void)
{
	int length,count,i;
	while(1)
	{
		count=0;
		scanf("%s",array);
		if(strcmp(array,"#")==0) break;
		length=strlen(array);
		for(i=0;i<length;i++)
		{
			if(array[i]=='1') count++;
		}
		if(array[length-1]=='e')
		{
			if(count%2==0)
			{
				for(i=0;i<length-1;i++)
					printf("%c",array[i]);
				printf("0 \n");
			}
			else
			{
				for(i=0;i<length-1;i++)
					printf("%c",array[i]);
				printf("1 \n");				
			}
		}
		else
		{
			if(count%2!=0)
			{
				for(i=0;i<length-1;i++)
					printf("%c",array[i]);
				printf("0 \n");
			}
			else
			{
				for(i=0;i<length-1;i++)
					printf("%c",array[i]);
				printf("1 \n");				
			}
		}		
	}
	return 0;
}
