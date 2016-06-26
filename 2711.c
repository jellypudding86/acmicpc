#include <stdio.h>
int main(void)
{
	int T,i,j,n;
	char array[81]={'\0'};
	
	scanf("%d",&T);
	
	for(i=0;i<T;i++)
	{
		scanf("%d %s",&n,array);
		for(j=0;array[j]!='\0';j++)
		{
			if(j==n-1)
			{
			}
			else
			{
				printf("%c",array[j]);
			}
		}
		printf("\n");
	}

	return 0; 
}
