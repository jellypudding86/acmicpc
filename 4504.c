#include <stdio.h>
int main(void)
{
	int n,a;
	
	scanf("%d",&n);
	while(1)
	{
		scanf("%d",&a);
		if(a==0)
			break;
		else
		{
			if(a%n==0)
				printf("%d is a multiple of %d. \n",a,n);
			else
				printf("%d is NOT a multiple of %d. \n",a,n);
		}	
	}
	
	return 0;
}
