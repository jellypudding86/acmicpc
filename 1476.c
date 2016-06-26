#include <stdio.h>
int main(void)
{
	int E, S, M,year=1;
	
	scanf("%d %d %d",&E,&S,&M);
	
	if(E==15)E=0;
	if(S==28)S=0;
	if(M==19)M=0;
	
	while(1)
	{		
		if(year%15==E)
		{
			if(year%28==S)
			{
				if(year%19==M)
				{
					printf("%d",year);
					break;
				}
			}
		}
		year++;
	}
	
	return 0;
}
