#include <stdio.h>
int main(void)
{
	int A,B;
	scanf("%d %d",&A,&B);
	
	printf("%d \n",gcd(A,B));
	printf("%d \n",lcm(A,B));
	
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
