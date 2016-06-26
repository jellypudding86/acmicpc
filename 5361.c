#include <stdio.h>
int main(void)
{
	int A,T,i;
	float sum;
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		sum=0;
		scanf("%d",&A);
		sum=sum+(350.34*A);
		scanf("%d",&A);
		sum=sum+(230.90*A);	
		scanf("%d",&A);
		sum=sum+(190.55*A);
		scanf("%d",&A);
		sum=sum+(125.30*A);	
		scanf("%d",&A);
		sum=sum+(180.90*A);	
		
		printf("$%.02f \n",sum);					
	}
	
	return 0;
}
