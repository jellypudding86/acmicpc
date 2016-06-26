#include <stdio.h>
#include <string.h>
int main(void)
{
	int array[5]={0,0,0,0,0};
	char name[11];
	int i,check=0;
	
	for(i=0;i<5;i++)
	{
		scanf("%s",name);
		array[i]=strstr(name,"FBI");
	}
	
	for(i=0;i<5;i++)
	{
		if(array[i]!=0)
		{
			printf("%d ",i+1);
			check++;
		}
	}
	
	if(check==0)
		printf("HE GOT AWAY! ");
	
	printf("\n");
	
	return 0;
}
