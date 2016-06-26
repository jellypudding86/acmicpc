#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	char array[81];
}WORD;
int main(void)
{
	int n,i,j;
	WORD *word;
	
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		word=(WORD *)calloc(n,sizeof(WORD));
		for(i=0;i<n;i++)
			scanf("%s",&word[i].array);
	
		if(n%2==0)
		{
			j=n/2;
			for(i=0;i<n/2;i++)
			{
				printf("%s \n",word[i].array);
				printf("%s \n",word[j].array);
				j++;
			}
		}
		else
		{
			j=n/2+1;
			for(i=0;i<n/2;i++)
			{
				printf("%s \n",word[i].array);
				printf("%s \n",word[j].array);
				j++;
			}
			printf("%s \n",word[n/2].array);
		}
		
		free(word);		
	}
	
	return 0;
}
