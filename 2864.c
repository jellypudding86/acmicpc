#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char array1[1000001];
	char array2[1000001];
	int i,A,B,max,min;
	
	scanf("%s",array1);
	scanf("%s",array2);
	
	for(i=0;array1[i]!='\0';i++)
	{
		if(array1[i]=='5')
			array1[i]='6';
	}
	for(i=0;array2[i]!='\0';i++)
	{
		if(array2[i]=='5')
			array2[i]='6';
	}
	A=atoi(array1);
	B=atoi(array2);
	max=A+B;
	
	for(i=0;array1[i]!='\0';i++)
	{
		if(array1[i]=='6')
			array1[i]='5';
	}
	for(i=0;array2[i]!='\0';i++)
	{
		if(array2[i]=='6')
			array2[i]='5';
	}
	A=atoi(array1);
	B=atoi(array2);
	min=A+B;
	
	printf("%d %d",min,max);
	
	return 0;	
	
}
