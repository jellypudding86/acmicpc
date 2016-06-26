#include <stdio.h>
int main(void)
{
	int T,R,i,j,k;
	char array[21];
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %s",&R,array);
		for(j=0;array[j]!='\0';j++)
		{
			for(k=0;k<R;k++)
				printf("%c",array[j]);
		}
		printf("\n");
	}
	return 0;
}
