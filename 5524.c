#include <stdio.h>
int main(void)
{
	int N,i,j;
	char array[21];
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s",array);
		for(j=0;array[j]!='\0';j++)
		{
			if(array[j]<97)
				array[j]=array[j]+32;
		}
		printf("%s \n",array);
	}
	
	return 0;
}
