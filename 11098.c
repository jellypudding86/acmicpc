#include <stdio.h>
#include <string.h>
int main(void)
{
	int T,N,i,j,L,max;
	char array[21];
	char school[21];
	
	scanf("%d",&T);
	for(j=0;j<T;j++)
	{
		max=0;
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d %s",&L,array);
			if(L>max)
			{
				max=L;
				strcpy(school,array);
			}
		}
		
		printf("%s \n",school);
	}
	
	return 0;
}
