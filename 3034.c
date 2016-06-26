#include <stdio.h>
#include <math.h>
int main(void)
{
	int N,W,H,i,length;
	
	scanf("%d %d %d",&N,&W,&H);
	for(i=0;i<N;i++)
	{
		scanf("%d",&length);
		if(length<=sqrt((W*W)+(H*H)))
			printf("DA \n");
		else
			printf("NE \n");
	}
	
	return 0;
}
