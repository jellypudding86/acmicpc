#include <stdio.h>
int main(void)
{
	int n,i,a,b,A=100,B=100;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		if(a>b)
			B=B-a;
		else if(a<b)
			A=A-b;
	}
	
	printf("%d \n",A);
	printf("%d \n",B);
	
	return 0;
}
