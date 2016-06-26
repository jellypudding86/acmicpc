#include <stdio.h>
int main(void)
{
	long long a,b,result;
	char c;
	
	scanf("%lld",&a);
	result =a;
	scanf("\n");
	while(1)
	{
		scanf("%c",&c);
		if(c=='=')
		{
			printf("%lld \n",result);
			break;
		}
		scanf("%lld\n",&b);
	
		switch(c)
		{
			case '+' :
				result+=b;
				break;
			case '-' :
				result-=b;
				break;
			case '*' :
				result*=b;
				break;
			case '/' :
				result/=b;
				break;	
			default :
				break;								
		}
	}
	return 0;
}
