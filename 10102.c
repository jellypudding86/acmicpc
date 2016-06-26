#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int V,i;
	int A=0;
	int B=0;
	char c;
	
	scanf("%d ",&V);
	
	for(i=0;i<V;i++)
	{
		scanf("%c",&c);
		if(c=='A')
			A++;
		else
			B++;
	}
		
	if(A>B)
		printf("A \n");
	else if(A<B)
		printf("B \n");
	else
		printf("Tie \n");
		
	return 0;
	
}
