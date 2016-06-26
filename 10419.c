#include <stdio.h>
int main(void)
{
	int T,s,t,d,i,max;
	
	scanf("%d",&T);
	
	for(i=0;i<T;i++)
	{
		scanf("%d",&d);
		t=0;
		while(1)
		{
			s=t*t;
			if(s+t<=d) max=t;
			else break;
			t++;
		}
		printf("%d \n",max);
	}
}
