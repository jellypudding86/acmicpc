#include <stdio.h>
int main(void)
{
	int i,a,sum=0;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a);
		sum+=a;
	}
	printf("%d \n",sum);
	return 0;
}
