#include <stdio.h>
int main(void)
{
	int T,i,X,Y,Z;
	char c;
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %c %d = %d",&X,&c,&Y,&Z);
		if(c=='+')
		{
			if(X+Y==Z)
				printf("Case %d: YES \n",i+1);
			else
				printf("Case %d: NO \n",i+1);
		}
		else
		{
			if(X-Y==Z)
				printf("Case %d: YES \n",i+1);
			else
				printf("Case %d: NO \n",i+1);
		}		
	}
	
	return 0;
}
