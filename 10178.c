#include <stdio.h>
int main(void)
{
	int T,i,a,b,c;
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&a,&b);
		c=a/b;
		printf("You get %d piece(s) and your dad gets %d piece(s). \n",c,a-b*c);
	}
	
	return 0;
}
