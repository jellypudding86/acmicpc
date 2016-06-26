#include <stdio.h>
int main(void)
{
	int T,i,j,sum,correct;
	char array[81];
	
	scanf("%d",&T);
	for(j=0;j<T;j++)
	{
		sum=0;
		correct=1;
		scanf("%s",array);
		for(i=0;array[i]!='\0';i++)
		{
			if(array[i]=='O')
			{
				sum=sum+correct;
				correct++;
			}
			else
			{
				correct=1;
			}
		}
		
		printf("%d \n",sum);
	}
	
	return 0;
}
