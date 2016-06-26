#include <stdio.h>
int main(void)
{
	int a,b,T,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&a,&b);
		printf("%d \n",lcm(a,b));
	}
	return 0;
}

int gcd(int a,int b)
{
	return b?gcd(b,a%b):a;
}

int lcm(int a,int b)
{
	return gcd(a,b)*(a/gcd(a,b))*(b/gcd(a,b));
}
