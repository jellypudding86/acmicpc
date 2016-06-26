#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	int N,i;
	char array[101];
	char tmp1[101];
	char tmp2[101];
	char *result;
	
	scanf("%d",&N);
	getchar();
	for(i=0;i<N;i++)
	{
		gets(array);
		result=strtok(array, " ");
		strcpy(tmp1,result);
		result=strtok(NULL," ");
		strcpy(tmp2,result);
		
		result=strtok(NULL," ");
		while(result!=NULL)
		{
			printf("%s ",result);
			result=strtok(NULL," ");
		}
		
		printf("%s ",tmp1);
		printf("%s \n",tmp2);
	}
	
	return 0;
}
