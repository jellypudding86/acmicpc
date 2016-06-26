#include <stdio.h>
#include <string.h>
char array[200][200];
char string[201];
int main(void)
{
	int K,column,i,j,index;
	scanf("%d",&K);
	scanf("%s",string);
	column=strlen(string)/K;
	index=0;
	
	for(j=0;j<column;j++)
	{
		if(j%2==0)
		{
			for(i=0;i<K;i++)
			{
				array[i][j]=string[index++];		
			}
		}
		else
		{
			for(i=K-1;i>=0;i--)
			{
				array[i][j]=string[index++];		
			}			
		}
	}
	
	for(i=0;i<K;i++)
	{
		printf("%s",array[i]);
	}
	
	return 0;
}

