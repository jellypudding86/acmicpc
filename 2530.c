#include <stdio.h>
int main(void)
{
	int A,B,C, D;
	int hour, min, sec;
	
	scanf("%d %d %d",&A, &B, &C);
	scanf("%d",&D);
	
	hour = A + ((C+D)/60 +B)/60;
	min = B + (C+D)/60;
	sec = C + D%60;
	
	printf("%d %d %d\n", hour%24, min%60, sec%60);
	
	return 0;
}
