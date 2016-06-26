#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int random;
	srand((unsigned)time(NULL));
	random=rand();
	random=rand()%10+1;
	
	printf("%d",random);
	
	return 0;
}
