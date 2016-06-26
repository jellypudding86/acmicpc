#include <stdio.h>
int main(void)
{
	int T,i,j,k,n;

	scanf("%d",&T);
	for(j=0;j<T;j++)
	{
		scanf("%d",&n);
		if(n==1)
		{
			printf("# \n\n");
		}
		else
		{
			for(i=0;i<n;i++)
				printf("#");
			printf("\n");
			for(i=0;i<n-2;i++)
			{
				printf("#");
				for(k=0;k<n-2;k++)
					printf("J");
				printf("# \n");
			}
			for(i=0;i<n;i++)
				printf("#");
			printf("\n");	
			printf("\n");
		}
	}
	
	return 0;
}
