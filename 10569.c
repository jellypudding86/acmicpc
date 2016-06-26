#include <stdio.h>
int main(void)
{
	int T,V,E,i;
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&V,&E);
		printf("%d \n",2-V+E);
	}
	
	return 0;
}
