#include <stdio.h>
int main(void)
{
	int e,f,c,count=0;
	int current,use;
	
	scanf("%d %d %d",&e,&f,&c);

	current=e+f;
	while(1)
	{
		use=current/c;
		count=count+use;
		current=current-(current/c*c)+use;
		if(current<c)
			break;		
	}
	
	printf("%d \n",count);
	return 0;
}
