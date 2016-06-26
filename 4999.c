#include <stdio.h>
int main(void)
{
	char array1[1000];
	char array2[1000];
	int count1=0;
	int count2=0;
	int i;
	
	scanf("%s",array1);
	scanf("%s",array2);
	
	for(i=0;array1[i]!='\0';i++)
	{
		count1++;
	}
	for(i=0;array2[i]!='\0';i++)
	{
		count2++;
	}
	if(count1>=count2)	
		printf("go \n");
	else
		printf("no \n");
		
	return 0;	
}
