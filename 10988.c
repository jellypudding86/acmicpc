#include <stdio.h>
#include <string.h>
int main(void)
{
	char array[101];
	int i,j,n,check=1;
	
	scanf("%s",array);
	n=strlen(array);
	for(i=0;i<=n/2;i++)
	{
		if(array[i]!=array[n-i-1])
			check=0;
	}
	if(check==1)
		printf("1 \n");
	else
		printf("0 \n");
		
	return 0;
}
