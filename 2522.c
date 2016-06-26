#include <stdio.h>
int main(void)
{
	int i, j;
	int N;

	scanf("%d", &N);

	for (i = 1; i < N; i++)
	{
		for (j = N - i; j > 0; j--)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i < N+1; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf(" ");
		}
		for (j = N - i; j >= 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
		
	return 0;
}
