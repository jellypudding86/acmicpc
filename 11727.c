#include <stdio.h>
int array[1001];
int main(void)
{
	int n,i;
	array[0]=1;
	array[1]=1;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		array[i]=array[i-1]+array[i-2]+array[i-2];
		array[i]=array[i]%10007;
	}
	printf("%d \n",array[n]);
	
	return 0;
}
