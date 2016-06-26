#include <stdio.h>
int main(void)
{
	int T,i,j,check=0;
	int order=0;
	char array[51];
	
	
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		order=0;
		check=0;
		scanf("%s",array);
		for(j=0;array[j]!='\0';j++)
		{
			if(array[j]=='(')
				check++;
			else if(array[j]==')')
				check--;
			
			if(check<0)
			{
				order=1;	
			}
		}
		if(order==1)
			printf("NO \n");
		else
		{
			if(check==0)
				printf("YES \n");
			else
				printf("NO \n");
		}
	}
	
	return 0;
}



