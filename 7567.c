#include <stdio.h>
#include <string.h>
int main(void)
{
	char array[51];
	int i,length,sum=10;
	
	scanf("%s",array);
	length=strlen(array);
	for(i=0;i<length;i++)
	{
		if(array[i]=='(')
			array[i]=1;
		else if(array[i]==')')
			array[i]=0;
	}

	for(i=1;i<length;i++)
	{
		if(array[i]==array[i-1])
		{
			sum=sum+5;
		}
		else
		{
			sum=sum+10;	
		}
	}
	
	printf("%d \n",sum);
	
	return 0;
}
