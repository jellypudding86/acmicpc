#include <stdio.h>
int main(void)
{
	int i, j;
	int N;

	scanf("%d", &N);

	for(j=1;j<N;j++)
    {
		for(i=1;i<=j;i++)
    	{
        	printf("*");   
    	}
    	printf("\n");
    }
	for (j = N; j >0; j--)
	{
		i = j;
		while(i>0)
		{
			printf("*");
			i--;
		}
		printf("\n");
	}		
	return 0;
}
