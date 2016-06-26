#include <stdio.h>

int main(void)
{
	int N,i,j;
	char array[1001];
	char *pos;
	
	scanf("%d",&N);
	getchar();
	for(j=0;j<N;j++)
	{
		gets(array);
		pos=strstr(array,"Simon says");
		
		if(pos==&array[0])		
		{	
			for(i=10;array[i]!='\0';i++)
				printf("%c",array[i]);
			printf("\n");
		}
	}
	
	return 0;
}
