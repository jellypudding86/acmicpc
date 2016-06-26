#include <stdio.h>
#include <math.h>
double a,b,temp,v;
int main(void)
{
	while(1)
	{
		scanf("%lf %lf",&a,&b);
		if(a==0&&b==0) break;
		
		temp=b/a;
		temp=temp*temp;
		v=sqrt(1-temp);
		
		printf("%.3lf \n",v);
	}
	return 0;
}
