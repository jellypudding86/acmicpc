#include <stdio.h>
int main(void)
{
	int A,B,C,D;
	
	scanf("%d %d",&A, &B);
	scanf("%d %d",&C, &D);
	
	if(B+C>A+D)
		printf("%d \n",A+D);
	else
		printf("%d \n",B+C);
	
	return 0;
}

