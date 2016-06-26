#include <stdio.h>
int main(void)
{
	int n,i,j;
	char array[51];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",array);
		printf("String #%d \n",i+1);
		for(j=0;array[j]!='\0';j++)
		{
			if(array[j]==90)
				printf("A");
			else
				printf("%c",array[j]+1);
		}
		printf("\n \n");	
	}
	
	return 0;
}
