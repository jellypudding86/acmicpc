#include <stdio.h>
#include <string.h>
#define MAX 20

int main(void)
{
	char *word1;
	char *word2;
	int i,j,num;
	
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		word1=(char*)malloc(MAX*sizeof(char));
		word2=(char*)malloc(MAX*sizeof(char));
		scanf("%s %s",word1,word2);
		
		printf("Distances: ");
		for(j=0;j<strlen(word1);j++)
		{
			if(word1[j]>word2[j])
				printf("%d ",word2[j]+26-word1[j]);
			else
				printf("%d ",word2[j]-word1[j]);		
		}
		printf("\n");
	}	
    return 0;
}
