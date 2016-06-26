#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	printf("%d \n",N*(N-1)*(N-2)*(N-3)/24);
	return 0;
}
