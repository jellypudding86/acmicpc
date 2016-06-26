#include <stdio.h>
int main(void)
{
	int A,B,C;
	int hour, min;
	
	scanf("%d %d",&A, &B);
	scanf("%d",&C);
	
	hour = A + (B+C)/60;
	min = B + C%60;
	
	printf("%d %d \n", hour%24, min%60);
	
	return 0;
}
