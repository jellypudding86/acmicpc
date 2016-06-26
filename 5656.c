#include <stdio.h>
#include <string.h>
int main(void)
{
	int a,b,count=1;
	char array[3];
	
	while(1)
	{
		scanf("%d %s %d",&a,array,&b);
		if(array[0]=='>')
		{
			if(array[1]=='=')
			{
				if(a>=b)
					printf("Case %d: true \n",count);
				else
					printf("Case %d: false \n",count);
			}
			else
			{
				if(a>b)
					printf("Case %d: true \n",count);
				else
					printf("Case %d: false \n",count);
			}			
		}
		else if(array[0]=='<')
		{
			if(array[1]=='=')
			{
				if(a<=b)
					printf("Case %d: true \n",count);
				else
					printf("Case %d: false \n",count);
			}
			else
			{
				if(a<b)
					printf("Case %d: true \n",count);
				else
					printf("Case %d: false \n",count);
			}
		}
		else if(array[1]=='=')
		{
			if(array[0]=='!')
			{
				if(a!=b)
					printf("Case %d: true \n",count);
				else
					printf("Case %d: false \n",count);
			}
			else
			{
				if(a==b)
					printf("Case %d: true \n",count);
				else
					printf("Case %d: false \n",count);
			}	
		}
		else if(array[0]=='E')
			break;	
			
		count++;				
	}

	return 0;
}
