#include <stdio.h>
int main(void)
{
	int A,B;
	
	while(1)
	{
		scanf("%d %d",&A,&B);
		if(A==0&&B==0)
			break;
		if((A/B>0)&(A%B==0))
			printf("multiple \n");
		else if((B/A>0)&(B%A==0))
			printf("factor \n");
		else
			printf("neither \n");	
	}
	
	return 0;
}
