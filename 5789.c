#include <stdio.h>
#include <string.h>
int main(void)
{
	int N,i;
	char array[1001];
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s",array);
		if(array[strlen(array)/2]==array[strlen(array)/2-1])
			printf("Do-it \n");
		else
			printf("Do-it-Not \n");
	}
	return 0;
}
