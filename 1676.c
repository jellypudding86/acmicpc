#include <stdio.h>
int main(void)
{
    int n, a, b, c;
    scanf("%d",&n);
    if(n==0) a=0; else a=(n/5);
    b=(n/25);
    c=(n/125);
    printf("%d", a+b+c);
	return 0;
}
