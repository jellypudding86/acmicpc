#include <stdio.h>
int main(void)
{
	int T,i;
	float num;
	char c;
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%f", &num);
		while(getchar()!='\n')
		{
			c=getchar();
			if(c=='@')
				num=num*3;
			else if(c=='%')
				num=num+5;
			else if(c=='#')
				num=num-7;
		}
		
		printf("%.02f \n",num);
	}
		
	return 0;
}
