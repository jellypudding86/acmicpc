#include <stdio.h>
#include <string.h>

int main(void)
{
	int N,a,length,i;
	char array[61];
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s",array);
		length=strlen(array);
		
		a=(int)array[length-1];

		if(a%2==0)printf("even \n");
		else printf("odd \n");
	}
	
	return 0;
}
