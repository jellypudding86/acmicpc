#include <stdio.h>
int main(void)
{
	int T,N,C,cookie,i,left;
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&N,&C);
		
		cookie=N/C;
		left=N-(cookie*C);
		
		if(left==0) printf("%d \n",cookie);
		else printf("%d \n",cookie+1);
	}
	
	return 0;
}
