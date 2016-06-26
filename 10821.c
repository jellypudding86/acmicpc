#include<stdio.h>
int main(void)
{
	char array[101];
	int i,count=0;
	
	scanf("%s",array);
	for(i=0;array[i]!='\0';i++)
	{
		if(array[i]==',')
			count++;
	}
	printf("%d \n",count+1);
	
	return 0;
}
