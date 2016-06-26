#include <stdio.h>
int main(void)
{
	int T,s,n,i,j;
	int q,p;
	
	scanf("%d \n",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d",&s);
		scanf("%d",&n);
		if(n!=0)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d %d",&q,&p);
				s=s+q*p;
			}
		}
		printf("%d\n",s);
	}
	
	return 0;
}
