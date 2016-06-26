#include <stdio.h>
#include <string.h>
int main(void)
{
	int i=0,length,K,revert,start,j;
	char array[1000001];
	
	scanf("%s",array);
	
	length=strlen(array);
	
	for(i=0;i<length;i++)
		array[i]=array[i]-48;
	
	K=length%3;
	
	if(K==1)
	{
		printf("%d",array[0]);
		start=1;
	}
	else if(K==2)
	{
		printf("%d",array[0]*2+array[1]);
		start=2;
	}
	else start=0;
	
	i=start;
	for(j=0;j<length/3;j++)
	{
		printf("%d",array[i]*4+array[i+1]*2+array[i+2]);
		i=i+3;
	}

	
	return 0;
}
